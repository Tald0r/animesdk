#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7B694F0FCB814D50_Enum_3_0449CC4FE4D9C85D.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIComicPageContext; }
namespace MoleMole { class UIComicPageController; }
namespace System { class Action; }
namespace System { class String; }

#define CLASS_1_7B694F0FCB814D50_CLASS_1_1A5F6D621B2DEC4E_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xCA0A1B0)
#define CLASS_1_7B694F0FCB814D50_CLASS_1_1A5F6D621B2DEC4E__CTOR_OFFSET UNITYSDK_OFFSET(0xCA0A170)

inline static constexpr unsigned int Class_1_7B694F0FCB814D50_Class_1_1A5F6D621B2DEC4E_TypeDefinitionIndex = 77483;

class Class_1_7B694F0FCB814D50_Class_1_1A5F6D621B2DEC4E : public ::System::Object
{
public:
	::System::Action* Field_1_7; // 0x10
	::MoleMole::UIComicPageController* Field_1_6; // 0x18
	::System::Action* Field_1_8; // 0x20
	::Foundation::AssetRequestHandle Field_1_10; // 0x28
	::MoleMole::UIComicPageContext* Field_1_5; // 0x48
	::System::Action* Field_1_9; // 0x50
	::System::String* Field_1_3; // 0x58
	::System::Int64 Field_1_1; // 0x60
	::Class_1_7B694F0FCB814D50_Enum_3_0449CC4FE4D9C85D Field_1_2; // 0x68
	::System::Boolean Field_1_4; // 0x69
	::System::Int32 Field_1_0; // 0x6C

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7B694F0FCB814D50_CLASS_1_1A5F6D621B2DEC4E__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B694F0FCB814D50_CLASS_1_1A5F6D621B2DEC4E_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}
};
