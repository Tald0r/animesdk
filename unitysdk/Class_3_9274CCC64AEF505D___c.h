#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F8B5571A10EB0C4A.h"
#include "unitysdk/System/Object.h"

#define CLASS_3_9274CCC64AEF505D___C_METHOD_1_4C706B6019B13D4A_OFFSET UNITYSDK_OFFSET(0x1798ED60)
#define CLASS_3_9274CCC64AEF505D___C_METHOD_1_7439D2F0DCA77B50_OFFSET UNITYSDK_OFFSET(0x1798ED70)
#define CLASS_3_9274CCC64AEF505D___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1798ED10)
#define CLASS_3_9274CCC64AEF505D___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1798ED50)

inline static constexpr unsigned int Class_3_9274CCC64AEF505D___c_TypeDefinitionIndex = 20496;

class Class_3_9274CCC64AEF505D___c : public ::System::Object
{
public:
	static ::Class_3_9274CCC64AEF505D___c** StaticGet___9()
	{
		return (::Class_3_9274CCC64AEF505D___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_9274CCC64AEF505D___c_TypeDefinitionIndex)->GetStaticField(0xF8E0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_9274CCC64AEF505D___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9274CCC64AEF505D___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_4C706B6019B13D4A(::Enum_3_F8B5571A10EB0C4A a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Enum_3_F8B5571A10EB0C4A))((::PBYTE)hIl2Cpp + CLASS_3_9274CCC64AEF505D___C_METHOD_1_4C706B6019B13D4A_OFFSET))(this, a1);
	}

	::Enum_3_F8B5571A10EB0C4A Method_1_7439D2F0DCA77B50(::System::Int32 a1)
	{
		return ((::Enum_3_F8B5571A10EB0C4A(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_9274CCC64AEF505D___C_METHOD_1_7439D2F0DCA77B50_OFFSET))(this, a1);
	}
};
