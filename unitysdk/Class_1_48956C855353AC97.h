#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Cameras/VNoiseParams.h"
#include "unitysdk/MoleMole/Config/ConfigDataPlayStacking.h"
#include "unitysdk/MoleMole/Config/ConfigDataPriority.h"
#include "unitysdk/MoleMole/Config/DissipationMode.h"
#include "unitysdk/MoleMole/Config/ShakeType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Cameras { class CameraDataAccessor; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }

#define CLASS_1_48956C855353AC97_METHOD_1_0652BBB5A22C81D2_OFFSET UNITYSDK_OFFSET(0x7BCC550)
#define CLASS_1_48956C855353AC97_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x7BCE1F0)
#define CLASS_1_48956C855353AC97_METHOD_1_27C66A2308F65974_OFFSET UNITYSDK_OFFSET(0x7BCE080)
#define CLASS_1_48956C855353AC97_METHOD_1_2CDBCE4514126151_OFFSET UNITYSDK_OFFSET(0x7BCD080)
#define CLASS_1_48956C855353AC97_METHOD_1_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x7BCCE60)
#define CLASS_1_48956C855353AC97_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x7BCC4D0)
#define CLASS_1_48956C855353AC97_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x7BCCD80)
#define CLASS_1_48956C855353AC97_METHOD_1_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0x7BCD7B0)
#define CLASS_1_48956C855353AC97_METHOD_1_4E8DF6F8A37B229A_OFFSET UNITYSDK_OFFSET(0x7BCDF80)
#define CLASS_1_48956C855353AC97_METHOD_1_C5F9823D509784CD_OFFSET UNITYSDK_OFFSET(0x7BCCEE0)
#define CLASS_1_48956C855353AC97_METHOD_1_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x7BCDFC0)
#define CLASS_1_48956C855353AC97_METHOD_1_C74E50CBD41F0264_2_OFFSET UNITYSDK_OFFSET(0x7BCE070)
#define CLASS_1_48956C855353AC97_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x7BCD8C0)
#define CLASS_1_48956C855353AC97_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x7BCE160)
#define CLASS_1_48956C855353AC97_METHOD_1_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0x7BCDFA0)
#define CLASS_1_48956C855353AC97_METHOD_1_E55A0E9CDE84DC6E_OFFSET UNITYSDK_OFFSET(0x7BCD8D0)
#define CLASS_1_48956C855353AC97_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x7BCE140)
#define CLASS_1_48956C855353AC97_METHOD_1_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x7BCE150)
#define CLASS_1_48956C855353AC97_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x7BCD8B0)
#define CLASS_1_48956C855353AC97_METHOD_1_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x7BCDFD0)
#define CLASS_1_48956C855353AC97_TOSTRING_OFFSET UNITYSDK_OFFSET(0x7BCBBF0)
#define CLASS_1_48956C855353AC97__CTOR_OFFSET UNITYSDK_OFFSET(0x7BCC4B0)

inline static constexpr unsigned int Class_1_48956C855353AC97_TypeDefinitionIndex = 60948;

class Class_1_48956C855353AC97 : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::UnityEngine::Transform* Field_1_4; // 0x18
	::UnityEngine::AnimationCurve* Field_1_13; // 0x20
	::System::String* Field_1_2; // 0x28
	::UnityEngine::AnimationCurve* Field_1_22; // 0x30
	::UnityEngine::AnimationCurve* Field_1_18; // 0x38
	::UnityEngine::AnimationCurve* Field_1_20; // 0x40
	::System::String* Field_1_7; // 0x48
	::System::Single Field_1_16; // 0x50
	::System::Boolean Field_1_27; // 0x54
	::System::Boolean Field_1_26; // 0x55
	::System::Single Field_1_11; // 0x58
	::System::Single Field_1_19; // 0x5C
	::System::Single Field_1_30; // 0x60
	::MoleMole::Config::ShakeType Field_1_15; // 0x64
	::System::Single Field_1_17; // 0x68
	::MoleMole::Config::DissipationMode Field_1_10; // 0x6C
	::System::Int32 Field_1_32; // 0x70
	::System::Single Field_1_34; // 0x74
	::System::UInt32 Field_1_3; // 0x78
	::MoleMole::Config::ConfigDataPriority Field_1_25; // 0x7C
	::MoleMole::Config::ConfigDataPlayStacking Field_1_24; // 0x80
	::UnityEngine::Vector3 Field_1_31; // 0x84
	::System::Int32 Field_1_0; // 0x90
	::System::Boolean Field_1_28; // 0x94
	::System::Boolean Field_1_23; // 0x95
	::System::Boolean Field_1_8; // 0x96
	::System::Boolean Field_1_35; // 0x97
	::UnityEngine::Vector3 Field_1_14; // 0x98
	::System::Single Field_1_9; // 0xA4
	::System::Single Field_1_12; // 0xA8
	::UnityEngine::Vector3 Field_1_29; // 0xAC
	::System::Single Field_1_33; // 0xB8
	::System::Single Field_1_36; // 0xBC
	::System::Single Field_1_21; // 0xC0
	::UnityEngine::Vector3 Field_1_5; // 0xC4
	::MoleMole::Cameras::VNoiseParams Field_1_6; // 0xD0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48956C855353AC97__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48956C855353AC97_TOSTRING_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48956C855353AC97_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_0652BBB5A22C81D2(::System::Single a1, ::MoleMole::Cameras::CameraDataAccessor* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::MoleMole::Cameras::CameraDataAccessor*))((::PBYTE)hIl2Cpp + CLASS_1_48956C855353AC97_METHOD_1_0652BBB5A22C81D2_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_4DA6D4A624E42CAB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48956C855353AC97_METHOD_1_4DA6D4A624E42CAB_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48956C855353AC97_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_48956C855353AC97_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_E55A0E9CDE84DC6E(::UnityEngine::Vector3 a1, ::System::Int32 a2, ::System::Single a3)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_48956C855353AC97_METHOD_1_E55A0E9CDE84DC6E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_4E8DF6F8A37B229A(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_48956C855353AC97_METHOD_1_4E8DF6F8A37B229A_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48956C855353AC97_METHOD_1_D37FAD0A6AA04B25_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_48956C855353AC97_METHOD_1_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::Single Method_1_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48956C855353AC97_METHOD_1_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_2(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_48956C855353AC97_METHOD_1_C74E50CBD41F0264_2_OFFSET))(this, a1);
	}

	::System::Single Method_1_27C66A2308F65974(::UnityEngine::Camera* a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Camera*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_48956C855353AC97_METHOD_1_27C66A2308F65974_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_391A84BCD9F51317_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48956C855353AC97_METHOD_1_391A84BCD9F51317_1_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48956C855353AC97_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48956C855353AC97_METHOD_1_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48956C855353AC97_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_2CDBCE4514126151(::MoleMole::Cameras::CameraDataAccessor* a1, ::System::Int32 a2, ::System::Single a3)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::MoleMole::Cameras::CameraDataAccessor*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_48956C855353AC97_METHOD_1_2CDBCE4514126151_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48956C855353AC97_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48956C855353AC97_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::System::Single Method_1_C5F9823D509784CD(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_48956C855353AC97_METHOD_1_C5F9823D509784CD_OFFSET))(this, a1);
	}
};
