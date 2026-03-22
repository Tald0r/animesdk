#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

namespace System { class String; }

#define CLASS_2_96CDB1F24F758964_METHOD_2_BC516BD7B592E51E_OFFSET UNITYSDK_OFFSET(0x94EF1B0)
#define CLASS_2_96CDB1F24F758964_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x94EF260)
#define CLASS_2_96CDB1F24F758964__CCTOR_OFFSET UNITYSDK_OFFSET(0x94EF130)
#define CLASS_2_96CDB1F24F758964__CTOR_OFFSET UNITYSDK_OFFSET(0x94EF1A0)

inline static constexpr unsigned int Class_2_96CDB1F24F758964_TypeDefinitionIndex = 75028;

class Class_2_96CDB1F24F758964 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_3 = 0xA1; // 0x0
	::System::String* Field_2_1; // 0x20
	::System::String* Field_2_2; // 0x28
	::System::Int32 Field_2_0; // 0x30

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_96CDB1F24F758964__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96CDB1F24F758964__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_BC516BD7B592E51E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96CDB1F24F758964_METHOD_2_BC516BD7B592E51E_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96CDB1F24F758964_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
