#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_B4E98DED3FBEAE53_Struct_2_C3D22550BC75786F.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_342;

#define CLASS_2_B4E98DED3FBEAE53___C_METHOD_1_13A78079F50E50F2_OFFSET UNITYSDK_OFFSET(0x7E852B0)
#define CLASS_2_B4E98DED3FBEAE53___C_METHOD_1_8AA9157FC69C9A3C_OFFSET UNITYSDK_OFFSET(0x7E85110)
#define CLASS_2_B4E98DED3FBEAE53___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x7E850C0)
#define CLASS_2_B4E98DED3FBEAE53___C__CTOR_OFFSET UNITYSDK_OFFSET(0x7E85100)

inline static constexpr unsigned int Class_2_B4E98DED3FBEAE53___c_TypeDefinitionIndex = 44516;

class Class_2_B4E98DED3FBEAE53___c : public ::System::Object
{
public:
	static ::Class_2_B4E98DED3FBEAE53___c** StaticGet___9()
	{
		return (::Class_2_B4E98DED3FBEAE53___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B4E98DED3FBEAE53___c_TypeDefinitionIndex)->GetStaticField(0x43040);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_8AA9157FC69C9A3C(::Class_2_B4E98DED3FBEAE53_Struct_2_C3D22550BC75786F a1, ::Class_2_B4E98DED3FBEAE53_Struct_2_C3D22550BC75786F a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_B4E98DED3FBEAE53_Struct_2_C3D22550BC75786F, ::Class_2_B4E98DED3FBEAE53_Struct_2_C3D22550BC75786F))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53___C_METHOD_1_8AA9157FC69C9A3C_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_13A78079F50E50F2(::Class_0_16E4307DCC419505_342* a1, ::Class_0_16E4307DCC419505_342* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_0_16E4307DCC419505_342*, ::Class_0_16E4307DCC419505_342*))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53___C_METHOD_1_13A78079F50E50F2_OFFSET))(this, a1, a2);
	}
};
