#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

class Class_3_B537A0AA78803363;
template <typename T> class Class_4_179456445C225AB4;
template <typename T> class Class_4_D0B094D0B900A9F0;

#define CLASS_3_368CFE32F3FA4452_METHOD_3_00C582D95B60B963_OFFSET UNITYSDK_OFFSET(0x77AB610)
#define CLASS_3_368CFE32F3FA4452_METHOD_3_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x77AB430)
#define CLASS_3_368CFE32F3FA4452_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x77AB8D0)
#define CLASS_3_368CFE32F3FA4452__CTOR_OFFSET UNITYSDK_OFFSET(0x77AB760)

inline static constexpr unsigned int Class_3_368CFE32F3FA4452_TypeDefinitionIndex = 51775;

class Class_3_368CFE32F3FA4452 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_3_B537A0AA78803363* Field_3_2; // 0x18
	::Class_4_D0B094D0B900A9F0<::System::Boolean>* Field_3_1; // 0x20
	::Class_4_179456445C225AB4<::Foundation::ViewObject::ViewObjectHandle>* Field_3_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_368CFE32F3FA4452__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_368CFE32F3FA4452_METHOD_3_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_3_00C582D95B60B963(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_368CFE32F3FA4452_METHOD_3_00C582D95B60B963_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_368CFE32F3FA4452_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
