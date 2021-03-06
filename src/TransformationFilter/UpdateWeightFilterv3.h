#ifndef UpdateWeightFilterv3_H_
#define UpdateWeightFilterv3_H_
//OpenCV
/*
#include "cv.h"
#include "highgui.h"

#include <string>
#include <iostream>
#include <stdio.h>

#include <boost/thread/thread.hpp>
#include <pcl/common/common_headers.h>
#include <pcl/features/normal_3d.h>
#include <pcl/io/pcd_io.h>
#include <pcl/visualization/pcl_visualizer.h>
#include <pcl/console/parse.h>

#include "RGBDFrame.h"
#include "Transformation.h"
*/
#include "TransformationFilter.h"

using namespace std;

class UpdateWeightFilterv3: public TransformationFilter
{
	public:
		boost::shared_ptr<pcl::visualization::PCLVisualizer> viewer;
		string name;
		float limit;
		float bad_weight;
		int min_points;
		UpdateWeightFilterv3();
		~UpdateWeightFilterv3();
		Transformation * filterTransformation(Transformation * input);
		void print();
		void setVisualization(boost::shared_ptr<pcl::visualization::PCLVisualizer> view);
};

#include "UpdateWeightFilterv3.h"

#endif
