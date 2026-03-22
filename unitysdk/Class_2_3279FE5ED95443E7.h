#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

namespace System { class String; }

#define CLASS_2_3279FE5ED95443E7_METHOD_2_128774387667156B_OFFSET UNITYSDK_OFFSET(0xBDD3820)
#define CLASS_2_3279FE5ED95443E7_METHOD_2_BC516BD7B592E51E_OFFSET UNITYSDK_OFFSET(0xBDD3770)
#define CLASS_2_3279FE5ED95443E7_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xBDD3860)
#define CLASS_2_3279FE5ED95443E7_TOSTRING_OFFSET UNITYSDK_OFFSET(0xBDD3650)
#define CLASS_2_3279FE5ED95443E7__CCTOR_OFFSET UNITYSDK_OFFSET(0xBDD36F0)
#define CLASS_2_3279FE5ED95443E7__CTOR_OFFSET UNITYSDK_OFFSET(0xBDD3760)

inline static constexpr unsigned int Class_2_3279FE5ED95443E7_TypeDefinitionIndex = 74371;

class Class_2_3279FE5ED95443E7 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_0 = 0xA5; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_3279FE5ED95443E7__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3279FE5ED95443E7__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3279FE5ED95443E7_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_2_BC516BD7B592E51E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3279FE5ED95443E7_METHOD_2_BC516BD7B592E51E_OFFSET))(this);
	}

	::System::String* Method_2_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3279FE5ED95443E7_METHOD_2_128774387667156B_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3279FE5ED95443E7_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
