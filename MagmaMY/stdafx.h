// Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
// SPDX-License-Identifier: Apache-2.0
// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

// Common Maya headers
#include <maya/M3dView.h>
#include <maya/MAnimControl.h>
#include <maya/MCommonRenderSettingsData.h>
#include <maya/MFnCamera.h>
#include <maya/MFnCompoundAttribute.h>
#include <maya/MFnDependencyNode.h>
#include <maya/MFnDoubleArrayData.h>
#include <maya/MFnEnumAttribute.h>
#include <maya/MFnMatrixData.h>
#include <maya/MFnNumericAttribute.h>
#include <maya/MFnStringData.h>
#include <maya/MFnTypedAttribute.h>
#include <maya/MFnUnitAttribute.h>
#include <maya/MFnVectorArrayData.h>
#include <maya/MGlobal.h>
#include <maya/MItDag.h>
#include <maya/MPlug.h>
#include <maya/MPlugArray.h>
#include <maya/MRenderUtil.h>
#include <maya/MRenderView.h>
#include <maya/MSelectionList.h>
#include <maya/MString.h>

#include <assert.h>
#include <map>
#include <stdexcept>
#include <string>
#include <vector>

#include <boost/shared_ptr.hpp>
