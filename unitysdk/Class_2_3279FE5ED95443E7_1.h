#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

namespace System { class String; }

#define CLASS_2_3279FE5ED95443E7_1_METHOD_2_128774387667156B_OFFSET UNITYSDK_OFFSET(0xE770E00)
#define CLASS_2_3279FE5ED95443E7_1_METHOD_2_BC516BD7B592E51E_OFFSET UNITYSDK_OFFSET(0xE770CF0)
#define CLASS_2_3279FE5ED95443E7_1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xE770DA0)
#define CLASS_2_3279FE5ED95443E7_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0xE770BD0)
#define CLASS_2_3279FE5ED95443E7_1__CCTOR_OFFSET UNITYSDK_OFFSET(0xE770C70)
#define CLASS_2_3279FE5ED95443E7_1__CTOR_OFFSET UNITYSDK_OFFSET(0xE770CE0)

inline static constexpr unsigned int Class_2_3279FE5ED95443E7_1_TypeDefinitionIndex = 57446;

class Class_2_3279FE5ED95443E7_1 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_0 = 0xA5; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_3279FE5ED95443E7_1__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3279FE5ED95443E7_1__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3279FE5ED95443E7_1_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_2_BC516BD7B592E51E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3279FE5ED95443E7_1_METHOD_2_BC516BD7B592E51E_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3279FE5ED95443E7_1_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::String* Method_2_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3279FE5ED95443E7_1_METHOD_2_128774387667156B_OFFSET))(this);
	}
};
