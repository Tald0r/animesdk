#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_0D3E1861111CA25D_Class_1_4BB18217B04AEDAE;
namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_0D3E1861111CA25D___C_METHOD_1_976210FDA8EBF915_OFFSET UNITYSDK_OFFSET(0xB547930)
#define CLASS_2_0D3E1861111CA25D___C_METHOD_1_FF8DFFDCCAB9F666_OFFSET UNITYSDK_OFFSET(0xB5479B0)
#define CLASS_2_0D3E1861111CA25D___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB5478E0)
#define CLASS_2_0D3E1861111CA25D___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB547920)

inline static constexpr unsigned int Class_2_0D3E1861111CA25D___c_TypeDefinitionIndex = 37163;

class Class_2_0D3E1861111CA25D___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_2_0D3E1861111CA25D_Class_1_4BB18217B04AEDAE*>** StaticGet___9__13_0()
	{
		return (::System::Comparison_1<::Class_2_0D3E1861111CA25D_Class_1_4BB18217B04AEDAE*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_0D3E1861111CA25D___c_TypeDefinitionIndex)->GetStaticField(0x2E930);
	}
	static ::Class_2_0D3E1861111CA25D___c** StaticGet___9()
	{
		return (::Class_2_0D3E1861111CA25D___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_0D3E1861111CA25D___c_TypeDefinitionIndex)->GetStaticField(0x2E938);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_0D3E1861111CA25D___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0D3E1861111CA25D___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_976210FDA8EBF915(::Class_2_0D3E1861111CA25D_Class_1_4BB18217B04AEDAE* a1, ::Class_2_0D3E1861111CA25D_Class_1_4BB18217B04AEDAE* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_0D3E1861111CA25D_Class_1_4BB18217B04AEDAE*, ::Class_2_0D3E1861111CA25D_Class_1_4BB18217B04AEDAE*))((::PBYTE)hIl2Cpp + CLASS_2_0D3E1861111CA25D___C_METHOD_1_976210FDA8EBF915_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_FF8DFFDCCAB9F666(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_0D3E1861111CA25D___C_METHOD_1_FF8DFFDCCAB9F666_OFFSET))(this, a1);
	}
};
