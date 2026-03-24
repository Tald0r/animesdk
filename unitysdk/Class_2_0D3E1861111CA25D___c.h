#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_0D3E1861111CA25D_Class_1_41E48A0094D0DEA4;
namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_0D3E1861111CA25D___C_METHOD_1_976210FDA8EBF915_OFFSET UNITYSDK_OFFSET(0x1566B230)
#define CLASS_2_0D3E1861111CA25D___C_METHOD_1_FF8DFFDCCAB9F666_OFFSET UNITYSDK_OFFSET(0x1566B180)
#define CLASS_2_0D3E1861111CA25D___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1566B130)
#define CLASS_2_0D3E1861111CA25D___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1566B170)

inline static constexpr unsigned int Class_2_0D3E1861111CA25D___c_TypeDefinitionIndex = 57207;

class Class_2_0D3E1861111CA25D___c : public ::System::Object
{
public:
	static ::Class_2_0D3E1861111CA25D___c** StaticGet___9()
	{
		return (::Class_2_0D3E1861111CA25D___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_0D3E1861111CA25D___c_TypeDefinitionIndex)->GetStaticField(0x2F530);
	}
	static ::System::Comparison_1<::Class_2_0D3E1861111CA25D_Class_1_41E48A0094D0DEA4*>** StaticGet___9__13_0()
	{
		return (::System::Comparison_1<::Class_2_0D3E1861111CA25D_Class_1_41E48A0094D0DEA4*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_0D3E1861111CA25D___c_TypeDefinitionIndex)->GetStaticField(0x2F538);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_0D3E1861111CA25D___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0D3E1861111CA25D___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_FF8DFFDCCAB9F666(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_0D3E1861111CA25D___C_METHOD_1_FF8DFFDCCAB9F666_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_976210FDA8EBF915(::Class_2_0D3E1861111CA25D_Class_1_41E48A0094D0DEA4* a1, ::Class_2_0D3E1861111CA25D_Class_1_41E48A0094D0DEA4* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_0D3E1861111CA25D_Class_1_41E48A0094D0DEA4*, ::Class_2_0D3E1861111CA25D_Class_1_41E48A0094D0DEA4*))((::PBYTE)hIl2Cpp + CLASS_2_0D3E1861111CA25D___C_METHOD_1_976210FDA8EBF915_OFFSET))(this, a1, a2);
	}
};
