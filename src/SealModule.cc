#include "FWCore/PluginManager/interface/ModuleDef.h"
#include "FWCore/Framework/interface/MakerMacros.h"

DEFINE_SEAL_MODULE();

//define this as a plug-in
// include header file here:
#include "CalibTracker/SiPixelIsAliveCalibration/interface/SiPixelIsAliveCalibration.h"
DEFINE_ANOTHER_FWK_MODULE(SiPixelIsAliveCalibration);


