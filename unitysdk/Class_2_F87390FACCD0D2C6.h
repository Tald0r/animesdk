#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E3019CE6003C7D3C.h"

class Class_0_16E4307DCC419505_343;
namespace System { class Exception; }
namespace System { class String; }

#define CLASS_2_F87390FACCD0D2C6_METHOD_2_6F5E5551684111D3_OFFSET UNITYSDK_OFFSET(0xA0B67E0)
#define CLASS_2_F87390FACCD0D2C6_METHOD_2_89C03AF435ED2C78_OFFSET UNITYSDK_OFFSET(0xA0B6A10)
#define CLASS_2_F87390FACCD0D2C6_METHOD_2_A9F32815290AD887_OFFSET UNITYSDK_OFFSET(0xA0B6680)
#define CLASS_2_F87390FACCD0D2C6_METHOD_2_B7A43C06FD78D78B_1_OFFSET UNITYSDK_OFFSET(0xA0B69A0)
#define CLASS_2_F87390FACCD0D2C6_METHOD_2_B7A43C06FD78D78B_OFFSET UNITYSDK_OFFSET(0xA0B6760)
#define CLASS_2_F87390FACCD0D2C6__CTOR_OFFSET UNITYSDK_OFFSET(0xA0B65D0)

inline static constexpr unsigned int Class_2_F87390FACCD0D2C6_TypeDefinitionIndex = 64698;

class Class_2_F87390FACCD0D2C6 : public ::Class_1_E3019CE6003C7D3C
{
public:
	::System::Int32 Field_2_0; // 0x48

	::System::Void _ctor(::System::UInt32 a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_F87390FACCD0D2C6__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_A9F32815290AD887(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F87390FACCD0D2C6_METHOD_2_A9F32815290AD887_OFFSET))(this, a1);
	}

	::System::Void Method_2_6F5E5551684111D3(::Class_0_16E4307DCC419505_343* a1, ::System::Exception* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_343*, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_2_F87390FACCD0D2C6_METHOD_2_6F5E5551684111D3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B7A43C06FD78D78B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F87390FACCD0D2C6_METHOD_2_B7A43C06FD78D78B_OFFSET))(this);
	}

	::System::Void Method_2_B7A43C06FD78D78B_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F87390FACCD0D2C6_METHOD_2_B7A43C06FD78D78B_1_OFFSET))(this);
	}

	::System::Void Method_2_89C03AF435ED2C78()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F87390FACCD0D2C6_METHOD_2_89C03AF435ED2C78_OFFSET))(this);
	}
};
