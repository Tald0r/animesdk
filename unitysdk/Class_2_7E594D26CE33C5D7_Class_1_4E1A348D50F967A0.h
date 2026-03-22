#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_7E594D26CE33C5D7_Enum_3_C20BCEF75F9B220F.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

class Class_1_046DE42B03CEC3F3;
namespace MoleMole { class UIGalgamePageContext; }
namespace MoleMole { class UIGalgamePageController; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_7E594D26CE33C5D7_CLASS_1_4E1A348D50F967A0_METHOD_1_BBA49FAB086F388D_OFFSET UNITYSDK_OFFSET(0x7E9DD00)
#define CLASS_2_7E594D26CE33C5D7_CLASS_1_4E1A348D50F967A0_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x7E9DCE0)
#define CLASS_2_7E594D26CE33C5D7_CLASS_1_4E1A348D50F967A0_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x7E9DCF0)
#define CLASS_2_7E594D26CE33C5D7_CLASS_1_4E1A348D50F967A0__CTOR_OFFSET UNITYSDK_OFFSET(0x7E9DC80)

inline static constexpr unsigned int Class_2_7E594D26CE33C5D7_Class_1_4E1A348D50F967A0_TypeDefinitionIndex = 48596;

class Class_2_7E594D26CE33C5D7_Class_1_4E1A348D50F967A0 : public ::System::Object
{
public:
	::MoleMole::UIGalgamePageContext* Field_1_6; // 0x10
	::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* Field_1_12; // 0x18
	::MoleMole::UIGalgamePageController* Field_1_0; // 0x20
	::System::String* Field_1_3; // 0x28
	::Foundation::AssetRequestHandle Field_1_11; // 0x30
	::System::Action* Field_1_8; // 0x50
	::System::Action* Field_1_9; // 0x58
	::System::Action* Field_1_10; // 0x60
	::Class_1_046DE42B03CEC3F3* Field_1_5; // 0x68
	::System::Boolean Field_1_7; // 0x70
	::Class_2_7E594D26CE33C5D7_Enum_3_C20BCEF75F9B220F Field_1_4; // 0x74
	::System::Int32 Field_1_1; // 0x78
	::System::Int64 Field_1_2; // 0x80

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_7E594D26CE33C5D7_CLASS_1_4E1A348D50F967A0__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_7E594D26CE33C5D7_CLASS_1_4E1A348D50F967A0_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E594D26CE33C5D7_CLASS_1_4E1A348D50F967A0_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_BBA49FAB086F388D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E594D26CE33C5D7_CLASS_1_4E1A348D50F967A0_METHOD_1_BBA49FAB086F388D_OFFSET))(this);
	}
};
