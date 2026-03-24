#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CharacterCameraDitheringData.h"
#include "unitysdk/MoleMole/Config/CameraDitherLayerData.h"
#include "unitysdk/MoleMole/Config/CharacterFadeDitheringDataV2.h"
#include "unitysdk/MoleMole/Config/LocalAvatarElevationRatioDitheringData.h"
#include "unitysdk/MoleMole/Config/SceneObjDitherData.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class CommonDitherConfigs; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_042840132BEE9EF9_METHOD_1_0159E3AD59D5F915_OFFSET UNITYSDK_OFFSET(0x7AB34E0)
#define CLASS_1_042840132BEE9EF9_METHOD_1_02EEA7FBB94A39E9_OFFSET UNITYSDK_OFFSET(0x7AB38C0)
#define CLASS_1_042840132BEE9EF9_METHOD_1_0BE1846AC20D43BE_OFFSET UNITYSDK_OFFSET(0x7AB3D60)
#define CLASS_1_042840132BEE9EF9_METHOD_1_2C1E1526ACD8C54F_OFFSET UNITYSDK_OFFSET(0x7AB36A0)
#define CLASS_1_042840132BEE9EF9_METHOD_1_41EC8E0AD6EE8093_OFFSET UNITYSDK_OFFSET(0x7AB35A0)
#define CLASS_1_042840132BEE9EF9_METHOD_1_68747F9F024B0676_OFFSET UNITYSDK_OFFSET(0x7AB3FC0)
#define CLASS_1_042840132BEE9EF9_METHOD_1_68A2CA32DC720C44_OFFSET UNITYSDK_OFFSET(0x7AB4140)
#define CLASS_1_042840132BEE9EF9_METHOD_1_89BFC79A99579DA0_OFFSET UNITYSDK_OFFSET(0x7AB3030)
#define CLASS_1_042840132BEE9EF9_METHOD_1_9732870E65EB4A92_OFFSET UNITYSDK_OFFSET(0x7AB3A40)
#define CLASS_1_042840132BEE9EF9_METHOD_1_A8AE4A9A45E37F95_OFFSET UNITYSDK_OFFSET(0x7AB3C50)
#define CLASS_1_042840132BEE9EF9_METHOD_1_C52E24D69E2FE395_OFFSET UNITYSDK_OFFSET(0x7AB3370)
#define CLASS_1_042840132BEE9EF9__CCTOR_OFFSET UNITYSDK_OFFSET(0x7AB3020)

inline static constexpr unsigned int Class_1_042840132BEE9EF9_TypeDefinitionIndex = 65724;

class Class_1_042840132BEE9EF9 : public ::System::Object
{
public:
	static ::MoleMole::Config::CommonDitherConfigs** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::CommonDitherConfigs**)Il2CppClass::FromTypeDefinitionIndex(Class_1_042840132BEE9EF9_TypeDefinitionIndex)->GetStaticField(0x3AB80);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_042840132BEE9EF9__CCTOR_OFFSET))();
	}

	static ::MoleMole::CharacterCameraDitheringData Method_1_89BFC79A99579DA0(::System::String* a1)
	{
		return ((::MoleMole::CharacterCameraDitheringData(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_042840132BEE9EF9_METHOD_1_89BFC79A99579DA0_OFFSET))(a1);
	}

	static ::MoleMole::Config::SceneObjDitherData Method_1_C52E24D69E2FE395()
	{
		return ((::MoleMole::Config::SceneObjDitherData(*)())((::PBYTE)hIl2Cpp + CLASS_1_042840132BEE9EF9_METHOD_1_C52E24D69E2FE395_OFFSET))();
	}

	static ::System::Boolean Method_1_0159E3AD59D5F915(::UnityEngine::AnimationCurve*& a1)
	{
		return ((::System::Boolean(*)(::UnityEngine::AnimationCurve*&))((::PBYTE)hIl2Cpp + CLASS_1_042840132BEE9EF9_METHOD_1_0159E3AD59D5F915_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_2C1E1526ACD8C54F(::System::String* a1, ::MoleMole::Config::CharacterFadeDitheringDataV2& a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::MoleMole::Config::CharacterFadeDitheringDataV2&))((::PBYTE)hIl2Cpp + CLASS_1_042840132BEE9EF9_METHOD_1_2C1E1526ACD8C54F_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_02EEA7FBB94A39E9(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_042840132BEE9EF9_METHOD_1_02EEA7FBB94A39E9_OFFSET))(a1);
	}

	static ::MoleMole::Config::CameraDitherLayerData Method_1_9732870E65EB4A92(::System::String* a1)
	{
		return ((::MoleMole::Config::CameraDitherLayerData(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_042840132BEE9EF9_METHOD_1_9732870E65EB4A92_OFFSET))(a1);
	}

	static ::System::Void Method_1_A8AE4A9A45E37F95(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_042840132BEE9EF9_METHOD_1_A8AE4A9A45E37F95_OFFSET))(a1, a2, a3, a4);
	}

	static ::MoleMole::Config::LocalAvatarElevationRatioDitheringData Method_1_68747F9F024B0676()
	{
		return ((::MoleMole::Config::LocalAvatarElevationRatioDitheringData(*)())((::PBYTE)hIl2Cpp + CLASS_1_042840132BEE9EF9_METHOD_1_68747F9F024B0676_OFFSET))();
	}

	static ::System::Void Method_1_0BE1846AC20D43BE(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_042840132BEE9EF9_METHOD_1_0BE1846AC20D43BE_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_41EC8E0AD6EE8093()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_042840132BEE9EF9_METHOD_1_41EC8E0AD6EE8093_OFFSET))();
	}

	static ::System::Single Method_1_68A2CA32DC720C44()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_042840132BEE9EF9_METHOD_1_68A2CA32DC720C44_OFFSET))();
	}
};
