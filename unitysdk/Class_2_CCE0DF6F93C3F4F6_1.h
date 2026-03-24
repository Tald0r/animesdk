#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D64631BCE72CBCD2.h"
#include "unitysdk/MoleMole/HollowPieceRepresentType.h"

#define CLASS_2_CCE0DF6F93C3F4F6_1_METHOD_2_3F7D432C99ECDDFB_OFFSET UNITYSDK_OFFSET(0x8DF3C50)
#define CLASS_2_CCE0DF6F93C3F4F6_1_METHOD_2_BEBC8F4773DC82AA_OFFSET UNITYSDK_OFFSET(0x8DF3B60)
#define CLASS_2_CCE0DF6F93C3F4F6_1__CTOR_OFFSET UNITYSDK_OFFSET(0x8DF3B20)

inline static constexpr unsigned int Class_2_CCE0DF6F93C3F4F6_1_TypeDefinitionIndex = 46231;

class Class_2_CCE0DF6F93C3F4F6_1 : public ::Class_1_D64631BCE72CBCD2
{
public:
	static ::Class_2_CCE0DF6F93C3F4F6_1** StaticGet_Field_2_0()
	{
		return (::Class_2_CCE0DF6F93C3F4F6_1**)Il2CppClass::FromTypeDefinitionIndex(Class_2_CCE0DF6F93C3F4F6_1_TypeDefinitionIndex)->GetStaticField(0x3C510);
	}

	::System::Void _ctor(::MoleMole::HollowPieceRepresentType a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowPieceRepresentType))((::PBYTE)hIl2Cpp + CLASS_2_CCE0DF6F93C3F4F6_1__CTOR_OFFSET))(this, a1);
	}

	static ::Class_2_CCE0DF6F93C3F4F6_1* Method_2_BEBC8F4773DC82AA()
	{
		return ((::Class_2_CCE0DF6F93C3F4F6_1*(*)())((::PBYTE)hIl2Cpp + CLASS_2_CCE0DF6F93C3F4F6_1_METHOD_2_BEBC8F4773DC82AA_OFFSET))();
	}

	static ::System::Void Method_2_3F7D432C99ECDDFB(::Class_2_CCE0DF6F93C3F4F6_1* a1)
	{
		return ((::System::Void(*)(::Class_2_CCE0DF6F93C3F4F6_1*))((::PBYTE)hIl2Cpp + CLASS_2_CCE0DF6F93C3F4F6_1_METHOD_2_3F7D432C99ECDDFB_OFFSET))(a1);
	}
};
