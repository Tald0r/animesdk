#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2CCC5D7984CDCED4;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_3_70A40997B058912A___C_METHOD_1_A6057D4B34DAB081_OFFSET UNITYSDK_OFFSET(0x643BB60)
#define CLASS_3_70A40997B058912A___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x643BB10)
#define CLASS_3_70A40997B058912A___C__CTOR_OFFSET UNITYSDK_OFFSET(0x643BB50)

inline static constexpr unsigned int Class_3_70A40997B058912A___c_TypeDefinitionIndex = 40197;

class Class_3_70A40997B058912A___c : public ::System::Object
{
public:
	static ::Class_3_70A40997B058912A___c** StaticGet___9()
	{
		return (::Class_3_70A40997B058912A___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_70A40997B058912A___c_TypeDefinitionIndex)->GetStaticField(0x34F90);
	}
	static ::System::Comparison_1<::Class_1_2CCC5D7984CDCED4*>** StaticGet___9__15_0()
	{
		return (::System::Comparison_1<::Class_1_2CCC5D7984CDCED4*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_70A40997B058912A___c_TypeDefinitionIndex)->GetStaticField(0x34F98);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_70A40997B058912A___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_70A40997B058912A___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_A6057D4B34DAB081(::Class_1_2CCC5D7984CDCED4* a1, ::Class_1_2CCC5D7984CDCED4* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_2CCC5D7984CDCED4*, ::Class_1_2CCC5D7984CDCED4*))((::PBYTE)hIl2Cpp + CLASS_3_70A40997B058912A___C_METHOD_1_A6057D4B34DAB081_OFFSET))(this, a1, a2);
	}
};
