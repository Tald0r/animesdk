#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

#define CLASS_2_D92ADE5D1F9362EF_2_METHOD_2_BC516BD7B592E51E_OFFSET UNITYSDK_OFFSET(0x8CDF000)
#define CLASS_2_D92ADE5D1F9362EF_2_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8CDF0B0)
#define CLASS_2_D92ADE5D1F9362EF_2__CCTOR_OFFSET UNITYSDK_OFFSET(0x8CDEF80)
#define CLASS_2_D92ADE5D1F9362EF_2__CTOR_OFFSET UNITYSDK_OFFSET(0x8CDEFF0)

inline static constexpr unsigned int Class_2_D92ADE5D1F9362EF_2_TypeDefinitionIndex = 72041;

class Class_2_D92ADE5D1F9362EF_2 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_1 = 0x2A; // 0x0
	::System::UInt32 Field_2_0; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_D92ADE5D1F9362EF_2__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D92ADE5D1F9362EF_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_BC516BD7B592E51E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D92ADE5D1F9362EF_2_METHOD_2_BC516BD7B592E51E_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D92ADE5D1F9362EF_2_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
