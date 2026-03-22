#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_F3CFF1AFF7EE7DCD;
namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_83F4593F399E06A3_METHOD_1_968D2E7D3B0888B3_OFFSET UNITYSDK_OFFSET(0x5E2FD10)
#define CLASS_1_83F4593F399E06A3_METHOD_1_AD8C9C5C67361408_OFFSET UNITYSDK_OFFSET(0x5E2FC40)
#define CLASS_1_83F4593F399E06A3__CTOR_OFFSET UNITYSDK_OFFSET(0x5E2FD80)

inline static constexpr unsigned int Class_1_83F4593F399E06A3_TypeDefinitionIndex = 40211;

class Class_1_83F4593F399E06A3 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83F4593F399E06A3__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_AD8C9C5C67361408(::System::Collections::Generic::List_1<::Class_2_F3CFF1AFF7EE7DCD*>*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_2_F3CFF1AFF7EE7DCD*>*&))((::PBYTE)hIl2Cpp + CLASS_1_83F4593F399E06A3_METHOD_1_AD8C9C5C67361408_OFFSET))(this, a1);
	}

	::System::Void Method_1_968D2E7D3B0888B3(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_83F4593F399E06A3_METHOD_1_968D2E7D3B0888B3_OFFSET))(this, a1);
	}
};
