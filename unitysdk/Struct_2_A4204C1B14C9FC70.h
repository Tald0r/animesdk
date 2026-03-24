#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_9F8D47E52A1FBE0C.h"
#include "unitysdk/Struct_2_74E7456CEA16AA28.h"
#include "unitysdk/System/ValueType.h"

class Class_1_B7E341C5F1A6F199;
namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define STRUCT_2_A4204C1B14C9FC70_METHOD_2_12FBA9471B7338ED_OFFSET UNITYSDK_OFFSET(0x37B3B0)
#define STRUCT_2_A4204C1B14C9FC70_METHOD_2_41FA00DED22BAF57_OFFSET UNITYSDK_OFFSET(0x37B3A0)
#define STRUCT_2_A4204C1B14C9FC70_METHOD_2_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x2613F0)
#define STRUCT_2_A4204C1B14C9FC70_METHOD_2_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x2613F0)
#define STRUCT_2_A4204C1B14C9FC70__CTOR_OFFSET UNITYSDK_OFFSET(0x37B370)

inline static constexpr unsigned int Struct_2_A4204C1B14C9FC70_TypeDefinitionIndex = 51882;

struct alignas(8) Struct_2_A4204C1B14C9FC70
{
	::Struct_2_74E7456CEA16AA28 Field_2_0; // 0x10
	::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>* Field_2_1; // 0x58
	::Enum_3_9F8D47E52A1FBE0C Field_2_2; // 0x60

	::System::Void _ctor(::Struct_2_74E7456CEA16AA28 a1, ::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>* a2, ::Enum_3_9F8D47E52A1FBE0C a3)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_74E7456CEA16AA28, ::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>*, ::Enum_3_9F8D47E52A1FBE0C))((::PBYTE)hIl2Cpp + STRUCT_2_A4204C1B14C9FC70__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_A4204C1B14C9FC70_METHOD_2_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_2_41FA00DED22BAF57(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + STRUCT_2_A4204C1B14C9FC70_METHOD_2_41FA00DED22BAF57_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_A4204C1B14C9FC70_METHOD_2_832295EC279E5994_1_OFFSET))(this);
	}

	::System::Void Method_2_12FBA9471B7338ED(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + STRUCT_2_A4204C1B14C9FC70_METHOD_2_12FBA9471B7338ED_OFFSET))(this, a1, a2);
	}
};
