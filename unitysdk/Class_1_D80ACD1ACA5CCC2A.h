#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_370;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D80ACD1ACA5CCC2A_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x9537450)
#define CLASS_1_D80ACD1ACA5CCC2A_METHOD_1_6F33BDFADAB75769_OFFSET UNITYSDK_OFFSET(0x95372C0)
#define CLASS_1_D80ACD1ACA5CCC2A_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x9537550)
#define CLASS_1_D80ACD1ACA5CCC2A_METHOD_1_969D9516A75501DE_OFFSET UNITYSDK_OFFSET(0x9537600)
#define CLASS_1_D80ACD1ACA5CCC2A_METHOD_1_C65180617FF9BA54_OFFSET UNITYSDK_OFFSET(0x9537610)
#define CLASS_1_D80ACD1ACA5CCC2A_METHOD_1_E65F3D10C43C961C_OFFSET UNITYSDK_OFFSET(0x9537440)
#define CLASS_1_D80ACD1ACA5CCC2A__CTOR_OFFSET UNITYSDK_OFFSET(0x95371D0)

inline static constexpr unsigned int Class_1_D80ACD1ACA5CCC2A_TypeDefinitionIndex = 78719;

class Class_1_D80ACD1ACA5CCC2A : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_0_16E4307DCC419505_370*>* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_370*>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D80ACD1ACA5CCC2A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_6F33BDFADAB75769(::Class_0_16E4307DCC419505_370* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_370*))((::PBYTE)hIl2Cpp + CLASS_1_D80ACD1ACA5CCC2A_METHOD_1_6F33BDFADAB75769_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_0_16E4307DCC419505_370*>* Method_1_E65F3D10C43C961C()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_0_16E4307DCC419505_370*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D80ACD1ACA5CCC2A_METHOD_1_E65F3D10C43C961C_OFFSET))(this);
	}

	::System::Void Method_1_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D80ACD1ACA5CCC2A_METHOD_1_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D80ACD1ACA5CCC2A_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_370*>* Method_1_969D9516A75501DE()
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_370*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D80ACD1ACA5CCC2A_METHOD_1_969D9516A75501DE_OFFSET))(this);
	}

	::System::Void Method_1_C65180617FF9BA54(::Class_0_16E4307DCC419505_370* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_370*))((::PBYTE)hIl2Cpp + CLASS_1_D80ACD1ACA5CCC2A_METHOD_1_C65180617FF9BA54_OFFSET))(this, a1);
	}
};
