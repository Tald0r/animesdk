#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9545B07472DE9BFD;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_ED145BFDAF1AFF31___C_METHOD_1_6DC0174AE1FF51EF_OFFSET UNITYSDK_OFFSET(0xC64FFC0)
#define CLASS_2_ED145BFDAF1AFF31___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC64FF70)
#define CLASS_2_ED145BFDAF1AFF31___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC64FFB0)

inline static constexpr unsigned int Class_2_ED145BFDAF1AFF31___c_TypeDefinitionIndex = 60696;

class Class_2_ED145BFDAF1AFF31___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_1_9545B07472DE9BFD*>** StaticGet___9__13_0()
	{
		return (::System::Comparison_1<::Class_1_9545B07472DE9BFD*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_ED145BFDAF1AFF31___c_TypeDefinitionIndex)->GetStaticField(0x3E710);
	}
	static ::Class_2_ED145BFDAF1AFF31___c** StaticGet___9()
	{
		return (::Class_2_ED145BFDAF1AFF31___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_ED145BFDAF1AFF31___c_TypeDefinitionIndex)->GetStaticField(0x3E718);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_ED145BFDAF1AFF31___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED145BFDAF1AFF31___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_6DC0174AE1FF51EF(::Class_1_9545B07472DE9BFD* a1, ::Class_1_9545B07472DE9BFD* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_9545B07472DE9BFD*, ::Class_1_9545B07472DE9BFD*))((::PBYTE)hIl2Cpp + CLASS_2_ED145BFDAF1AFF31___C_METHOD_1_6DC0174AE1FF51EF_OFFSET))(this, a1, a2);
	}
};
