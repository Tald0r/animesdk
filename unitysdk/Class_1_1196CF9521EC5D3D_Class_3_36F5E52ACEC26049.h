#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1196CF9521EC5D3D_Class_2_8515B7D827C132C3.h"
#include "unitysdk/MoleMole/ActivityRhythmClickBeatmapConfig_BeatMap_RhythmEventStruct.h"

namespace System { template <typename T> class Action_1; }

#define CLASS_1_1196CF9521EC5D3D_CLASS_3_36F5E52ACEC26049_METHOD_3_6D8B8CD47CD59618_OFFSET UNITYSDK_OFFSET(0x64839B0)
#define CLASS_1_1196CF9521EC5D3D_CLASS_3_36F5E52ACEC26049_METHOD_3_C1DCC7F185AB7195_OFFSET UNITYSDK_OFFSET(0x6483B30)
#define CLASS_1_1196CF9521EC5D3D_CLASS_3_36F5E52ACEC26049_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x6483AC0)
#define CLASS_1_1196CF9521EC5D3D_CLASS_3_36F5E52ACEC26049__CTOR_OFFSET UNITYSDK_OFFSET(0x6483810)

inline static constexpr unsigned int Class_1_1196CF9521EC5D3D_Class_3_36F5E52ACEC26049_TypeDefinitionIndex = 71225;

class Class_1_1196CF9521EC5D3D_Class_3_36F5E52ACEC26049 : public ::Class_1_1196CF9521EC5D3D_Class_2_8515B7D827C132C3
{
public:
	::System::Action_1<::System::Boolean>* Field_3_1; // 0x80
	::System::Boolean Field_3_0; // 0x88

	::System::Void _ctor(::MoleMole::ActivityRhythmClickBeatmapConfig_BeatMap_RhythmEventStruct a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ActivityRhythmClickBeatmapConfig_BeatMap_RhythmEventStruct, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1196CF9521EC5D3D_CLASS_3_36F5E52ACEC26049__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_6D8B8CD47CD59618()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1196CF9521EC5D3D_CLASS_3_36F5E52ACEC26049_METHOD_3_6D8B8CD47CD59618_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1196CF9521EC5D3D_CLASS_3_36F5E52ACEC26049_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_C1DCC7F185AB7195(::System::Action_1<::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_1196CF9521EC5D3D_CLASS_3_36F5E52ACEC26049_METHOD_3_C1DCC7F185AB7195_OFFSET))(this, a1);
	}
};
