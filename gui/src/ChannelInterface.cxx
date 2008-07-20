#include "../include/ChannelInterface.h"

ChannelInterface::ChannelInterface(int x, int y, int width, int height, 
				   const char* label): 
    CustomTab(x,y,width,height,label)
{
    colorVector_.push_back(fl_rgb_color(230,230,230));
    colorVector_.push_back(fl_rgb_color(100,100,100));

    for(int i=0; i<4; ++i){
	string str("Channel ");
	str += lexical_cast<string>(i+1);
	labelArray_.push_back(str);
    }

    for(int i=0; i<4; ++i){
	ChannelGroupPtr ptr(new ChannelGroup(x+15,y+20,230,100,labelArray_[i].c_str()));
	channelArray_.push_back(ptr);
	//channelArray_[i]->color(fl_rgb_color(220,220,220));
	this->add(channelArray_[i].get());
    }
    this->end();
};

// void ChannelInterface::Enable(const int& channel, const bool& enable)
// {
//     if(channel < 1 || channel > 4) cerr << "ERROR: ChannelInterface::Enable - invalid channel selection" << endl;
//     else{
// 	channelArray_[channel-1]->labelcolor(colorVector_[enable]);
// 	channelArray_[channel-1]->color(colorVector_[enable]);
// //	channelArray_[channel-1]->when(enable ? 4:0);
// 	if(enable)
// 	    channelArray_[channel-1]->show();
// 	else{
// 	    cout << "channel off" << endl;
// 	    channelArray_[channel-1]->set_output();
// 	}
//     }
// }
