#pragma once
#include "XsensConnection.h"
#include "iaSphereUtility.h"
#include "iaquaternion.h"
class iaAcquireGesture
{
public: 
	static bool calibIMU;
	
	SphereUtility sUtility;	

	quaternion offlineData[5000][10];

	Avatar getRawQ();
	Avatar getSFQ();
	Avatar getFirstInvQuat();
	void caliberateQSF();
	void calculateHeight(double &RuLeg, double &RlLeg, double &LuLeg, double &LlLeg);
	void getXsensData();
	void startXsensData();
	void resetIMUSensor();		
	void saveRawQuatData(int noOfFrames);
	void readFileQuatData(char *fileName);
	Avatar getFRQuatdata(int fNum);
	void saveRawQDataInRealTime(int frameIndex, bool CloseFile);
};

