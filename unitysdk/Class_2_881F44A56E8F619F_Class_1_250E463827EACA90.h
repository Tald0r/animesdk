#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_2_881F44A56E8F619F;
namespace MoleMole { class MonoGamepadVirtualCursor; }
namespace MoleMole { class UITwoDMapElement_Data; }

#define CLASS_2_881F44A56E8F619F_CLASS_1_250E463827EACA90_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xA03E6D0)
#define CLASS_2_881F44A56E8F619F_CLASS_1_250E463827EACA90_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0xA03E6C0)
#define CLASS_2_881F44A56E8F619F_CLASS_1_250E463827EACA90_METHOD_1_71A3A862FF897AF9_OFFSET UNITYSDK_OFFSET(0xA03E720)
#define CLASS_2_881F44A56E8F619F_CLASS_1_250E463827EACA90__CTOR_OFFSET UNITYSDK_OFFSET(0xA03E6B0)

inline static constexpr unsigned int Class_2_881F44A56E8F619F_Class_1_250E463827EACA90_TypeDefinitionIndex = 44576;

class Class_2_881F44A56E8F619F_Class_1_250E463827EACA90 : public ::System::Object
{
public:
	::MoleMole::MonoGamepadVirtualCursor* Field_1_1; // 0x10
	::MoleMole::UITwoDMapElement_Data* Field_1_5; // 0x18
	::Class_2_881F44A56E8F619F* Field_1_0; // 0x20
	::System::Single Field_1_3; // 0x28
	::UnityEngine::Vector2 Field_1_6; // 0x2C
	::System::Single Field_1_4; // 0x34
	::System::Single Field_1_2; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_CLASS_1_250E463827EACA90__CTOR_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_CLASS_1_250E463827EACA90_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_CLASS_1_250E463827EACA90_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_71A3A862FF897AF9(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_CLASS_1_250E463827EACA90_METHOD_1_71A3A862FF897AF9_OFFSET))(this, a1);
	}
};
