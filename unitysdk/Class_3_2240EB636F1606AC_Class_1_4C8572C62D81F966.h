#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }

#define CLASS_3_2240EB636F1606AC_CLASS_1_4C8572C62D81F966_METHOD_1_F85485D80BBD001F_OFFSET UNITYSDK_OFFSET(0x9761CD0)
#define CLASS_3_2240EB636F1606AC_CLASS_1_4C8572C62D81F966__CTOR_OFFSET UNITYSDK_OFFSET(0x9761CC0)

inline static constexpr unsigned int Class_3_2240EB636F1606AC_Class_1_4C8572C62D81F966_TypeDefinitionIndex = 57027;

class Class_3_2240EB636F1606AC_Class_1_4C8572C62D81F966 : public ::System::Object
{
public:
	::System::Int32 Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2240EB636F1606AC_CLASS_1_4C8572C62D81F966__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F85485D80BBD001F(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_2240EB636F1606AC_CLASS_1_4C8572C62D81F966_METHOD_1_F85485D80BBD001F_OFFSET))(this, a1);
	}
};
