#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Level/OverrideScenePerformDelayConfig.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class CutScenePerformConfig; }
namespace MoleMole::Config { class IScenePerformConfig; }
namespace MoleMole::Config { class SceneAvatarCutSceneConfig; }
namespace MoleMole::Config { class SceneEntityCutSceneConfig; }
namespace MoleMole::Config { class ScenePerformConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E720D6AA772529CC_METHOD_1_0BE1846AC20D43BE_OFFSET UNITYSDK_OFFSET(0x736A390)
#define CLASS_1_E720D6AA772529CC_METHOD_1_19A690DD44F2AE35_OFFSET UNITYSDK_OFFSET(0x736A800)
#define CLASS_1_E720D6AA772529CC_METHOD_1_2DCF23AADD1F14DD_OFFSET UNITYSDK_OFFSET(0x736A5F0)
#define CLASS_1_E720D6AA772529CC_METHOD_1_6D4DEE0076C7C90C_OFFSET UNITYSDK_OFFSET(0x736A7C0)
#define CLASS_1_E720D6AA772529CC_METHOD_1_A8AE4A9A45E37F95_OFFSET UNITYSDK_OFFSET(0x736A280)
#define CLASS_1_E720D6AA772529CC_METHOD_1_D40BA55ACD217E95_OFFSET UNITYSDK_OFFSET(0x736A9C0)
#define CLASS_1_E720D6AA772529CC_METHOD_1_FD72ECD3530632AC_OFFSET UNITYSDK_OFFSET(0x736AB70)

inline static constexpr unsigned int Class_1_E720D6AA772529CC_TypeDefinitionIndex = 41712;

class Class_1_E720D6AA772529CC : public ::System::Object
{
public:
	static ::MoleMole::Config::ScenePerformConfig** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ScenePerformConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E720D6AA772529CC_TypeDefinitionIndex)->GetStaticField(0x2DEC0);
	}

	static ::System::Void Method_1_A8AE4A9A45E37F95(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E720D6AA772529CC_METHOD_1_A8AE4A9A45E37F95_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_0BE1846AC20D43BE(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_E720D6AA772529CC_METHOD_1_0BE1846AC20D43BE_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::List_1<::MoleMole::Config::IScenePerformConfig*>* Method_1_2DCF23AADD1F14DD(::System::String* a1)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Config::IScenePerformConfig*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E720D6AA772529CC_METHOD_1_2DCF23AADD1F14DD_OFFSET))(a1);
	}

	static ::MoleMole::Config::ScenePerformConfig* Method_1_6D4DEE0076C7C90C()
	{
		return ((::MoleMole::Config::ScenePerformConfig*(*)())((::PBYTE)hIl2Cpp + CLASS_1_E720D6AA772529CC_METHOD_1_6D4DEE0076C7C90C_OFFSET))();
	}

	static ::MoleMole::Config::SceneEntityCutSceneConfig* Method_1_19A690DD44F2AE35(::System::Int32 a1)
	{
		return ((::MoleMole::Config::SceneEntityCutSceneConfig*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E720D6AA772529CC_METHOD_1_19A690DD44F2AE35_OFFSET))(a1);
	}

	static ::MoleMole::Config::SceneAvatarCutSceneConfig* Method_1_D40BA55ACD217E95(::System::Int32 a1, ::MoleMole::Level::OverrideScenePerformDelayConfig& a2)
	{
		return ((::MoleMole::Config::SceneAvatarCutSceneConfig*(*)(::System::Int32, ::MoleMole::Level::OverrideScenePerformDelayConfig&))((::PBYTE)hIl2Cpp + CLASS_1_E720D6AA772529CC_METHOD_1_D40BA55ACD217E95_OFFSET))(a1, a2);
	}

	static ::MoleMole::Config::CutScenePerformConfig* Method_1_FD72ECD3530632AC(::System::String* a1)
	{
		return ((::MoleMole::Config::CutScenePerformConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E720D6AA772529CC_METHOD_1_FD72ECD3530632AC_OFFSET))(a1);
	}
};
