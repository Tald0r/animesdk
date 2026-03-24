#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_A1E11F94C1500ACE;
namespace MoleMole { class UICinemaPlayPageController; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4D6C116518DDB940_METHOD_1_8A4E7CFB6A3884DD_OFFSET UNITYSDK_OFFSET(0xAC16F90)
#define CLASS_1_4D6C116518DDB940_METHOD_1_9A6DA36CCAE7D188_OFFSET UNITYSDK_OFFSET(0xAC17010)
#define CLASS_1_4D6C116518DDB940_METHOD_1_9FC62C4081A2C570_OFFSET UNITYSDK_OFFSET(0xAC16F10)
#define CLASS_1_4D6C116518DDB940__CTOR_OFFSET UNITYSDK_OFFSET(0xAC16ED0)

inline static constexpr unsigned int Class_1_4D6C116518DDB940_TypeDefinitionIndex = 77604;

class Class_1_4D6C116518DDB940 : public ::System::Object
{
public:
	::System::Action* Field_1_2; // 0x10
	::Class_2_A1E11F94C1500ACE* Field_1_0; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_4; // 0x20
	::System::Action* Field_1_3; // 0x28
	::MoleMole::UICinemaPlayPageController* Field_1_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D6C116518DDB940__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9FC62C4081A2C570(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4D6C116518DDB940_METHOD_1_9FC62C4081A2C570_OFFSET))(this, a1);
	}

	::System::Void Method_1_8A4E7CFB6A3884DD(::System::Action* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_4D6C116518DDB940_METHOD_1_8A4E7CFB6A3884DD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9A6DA36CCAE7D188()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D6C116518DDB940_METHOD_1_9A6DA36CCAE7D188_OFFSET))(this);
	}
};
