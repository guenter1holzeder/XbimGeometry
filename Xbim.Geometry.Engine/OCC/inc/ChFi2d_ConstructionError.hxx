// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ChFi2d_ConstructionError_HeaderFile
#define _ChFi2d_ConstructionError_HeaderFile

//! error     that    can   occur       during   the <br>
//!          fillet  construction on planar wire <br>//! the face is not planar <br>//! the face is null <br>//! the two  faces used for the initialisation are <br>
//!          uncompatible. <br>//! the  parameters  as  distances   or  angle for <br>
//!          chamfer are less or equal to zero. <br>//! the initialization has been succesfull. <br>//! the algorithm could not find a solution. <br>//! the vertex given  to locate the fillet  or the <br>
//!          chamfer  is not connected to 2 edges. <br>//! the two edges connected to the vertex are tangent. <br>//! the first edge is degenerated. <br>//! the last edge is degenerated. <br>//! the two edges are degenerated. <br>//! One or the two  edges connected to the  vertex <br>
//!          is a fillet or a chamfer <br>
//!          One or the two  edges connected to the  vertex <br>
//!          is not a line or a circle <br>
enum ChFi2d_ConstructionError {
ChFi2d_NotPlanar,
ChFi2d_NoFace,
ChFi2d_InitialisationError,
ChFi2d_ParametersError,
ChFi2d_Ready,
ChFi2d_IsDone,
ChFi2d_ComputationError,
ChFi2d_ConnexionError,
ChFi2d_TangencyError,
ChFi2d_FirstEdgeDegenerated,
ChFi2d_LastEdgeDegenerated,
ChFi2d_BothEdgesDegenerated,
ChFi2d_NotAuthorized
};

#ifndef _Standard_PrimitiveTypes_HeaderFile
#include <Standard_PrimitiveTypes.hxx>
#endif

#endif