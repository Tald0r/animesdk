#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class IComparable; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_798995D7624B327A___C_METHOD_1_5BCD046CA58EDCB8_OFFSET UNITYSDK_OFFSET(0x8B50D00)
#define CLASS_2_798995D7624B327A___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8B50CB0)
#define CLASS_2_798995D7624B327A___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8B50CF0)

inline static constexpr unsigned int Class_2_798995D7624B327A___c_TypeDefinitionIndex = 51388;

class Class_2_798995D7624B327A___c : public ::System::Object
{
public:
	static ::System::Func_2<::MoleMole::Battle::Entity*, ::System::IComparable*>** StaticGet___9__7_0()
	{
		return (::System::Func_2<::MoleMole::Battle::Entity*, ::System::IComparable*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_798995D7624B327A___c_TypeDefinitionIndex)->GetStaticField(0x2BF10);
	}
	static ::Class_2_798995D7624B327A___c** StaticGet___9()
	{
		return (::Class_2_798995D7624B327A___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_798995D7624B327A___c_TypeDefinitionIndex)->GetStaticField(0x2BF18);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_798995D7624B327A___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_798995D7624B327A___C__CTOR_OFFSET))(this);
	}

	::System::IComparable* Method_1_5BCD046CA58EDCB8(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::IComparable*(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_798995D7624B327A___C_METHOD_1_5BCD046CA58EDCB8_OFFSET))(this, a1);
	}
};
