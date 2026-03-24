#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_025FF4981524A424_50;
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_4_7D91CA380C94C005___C_METHOD_1_003058BFEB1A8728_OFFSET UNITYSDK_OFFSET(0x6CF9B50)
#define CLASS_4_7D91CA380C94C005___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x6CF9B00)
#define CLASS_4_7D91CA380C94C005___C__CTOR_OFFSET UNITYSDK_OFFSET(0x6CF9B40)

inline static constexpr unsigned int Class_4_7D91CA380C94C005___c_TypeDefinitionIndex = 73850;

class Class_4_7D91CA380C94C005___c : public ::System::Object
{
public:
	static ::System::Action_2<::System::Boolean, ::Class_3_025FF4981524A424_50*>** StaticGet___9__25_0()
	{
		return (::System::Action_2<::System::Boolean, ::Class_3_025FF4981524A424_50*>**)Il2CppClass::FromTypeDefinitionIndex(Class_4_7D91CA380C94C005___c_TypeDefinitionIndex)->GetStaticField(0x2FC50);
	}
	static ::Class_4_7D91CA380C94C005___c** StaticGet___9()
	{
		return (::Class_4_7D91CA380C94C005___c**)Il2CppClass::FromTypeDefinitionIndex(Class_4_7D91CA380C94C005___c_TypeDefinitionIndex)->GetStaticField(0x2FC58);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_7D91CA380C94C005___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7D91CA380C94C005___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_003058BFEB1A8728(::System::Boolean a1, ::Class_3_025FF4981524A424_50* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_3_025FF4981524A424_50*))((::PBYTE)hIl2Cpp + CLASS_4_7D91CA380C94C005___C_METHOD_1_003058BFEB1A8728_OFFSET))(this, a1, a2);
	}
};
