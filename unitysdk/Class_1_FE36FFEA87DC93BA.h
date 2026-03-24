#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_233;
class Class_0_16E4307DCC419505_234;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_1_FE36FFEA87DC93BA_METHOD_1_0B2ACA533259B73D_OFFSET UNITYSDK_OFFSET(0x70E12F0)
#define CLASS_1_FE36FFEA87DC93BA_METHOD_1_2C825E716CE9F2F9_OFFSET UNITYSDK_OFFSET(0x70E1280)
#define CLASS_1_FE36FFEA87DC93BA_METHOD_1_3CF43707BF2E9BBA_OFFSET UNITYSDK_OFFSET(0x70E1600)
#define CLASS_1_FE36FFEA87DC93BA_METHOD_1_57598E1E990D49D0_OFFSET UNITYSDK_OFFSET(0x70E19D0)
#define CLASS_1_FE36FFEA87DC93BA_METHOD_1_5C00C2EE4FCF347E_OFFSET UNITYSDK_OFFSET(0x70E1AF0)
#define CLASS_1_FE36FFEA87DC93BA_METHOD_1_BD90D844FA4A80AA_OFFSET UNITYSDK_OFFSET(0x70E1810)
#define CLASS_1_FE36FFEA87DC93BA_METHOD_1_CC5B0BB085FF5C11_OFFSET UNITYSDK_OFFSET(0x70E1550)
#define CLASS_1_FE36FFEA87DC93BA__CTOR_OFFSET UNITYSDK_OFFSET(0x70E1720)

inline static constexpr unsigned int Class_1_FE36FFEA87DC93BA_TypeDefinitionIndex = 78983;

class Class_1_FE36FFEA87DC93BA : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_233* Field_1_1; // 0x10
	::System::Collections::Generic::Queue_1<::Class_0_16E4307DCC419505_233*>* Field_1_0; // 0x18
	::System::Action_1<::Class_0_16E4307DCC419505_234*>* Field_1_3; // 0x20
	::System::Collections::Generic::Dictionary_2<::Class_0_16E4307DCC419505_233*, ::System::Action_1<::Class_0_16E4307DCC419505_234*>*>* Field_1_4; // 0x28
	::System::Boolean Field_1_2; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE36FFEA87DC93BA__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_2C825E716CE9F2F9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE36FFEA87DC93BA_METHOD_1_2C825E716CE9F2F9_OFFSET))(this);
	}

	::System::Void Method_1_CC5B0BB085FF5C11(::System::Action_1<::Class_0_16E4307DCC419505_234*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_0_16E4307DCC419505_234*>*))((::PBYTE)hIl2Cpp + CLASS_1_FE36FFEA87DC93BA_METHOD_1_CC5B0BB085FF5C11_OFFSET))(this, a1);
	}

	::System::Void Method_1_3CF43707BF2E9BBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE36FFEA87DC93BA_METHOD_1_3CF43707BF2E9BBA_OFFSET))(this);
	}

	::System::Void Method_1_0B2ACA533259B73D(::Class_0_16E4307DCC419505_234* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_234*))((::PBYTE)hIl2Cpp + CLASS_1_FE36FFEA87DC93BA_METHOD_1_0B2ACA533259B73D_OFFSET))(this, a1);
	}

	::System::Void Method_1_BD90D844FA4A80AA(::Class_0_16E4307DCC419505_234* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_234*))((::PBYTE)hIl2Cpp + CLASS_1_FE36FFEA87DC93BA_METHOD_1_BD90D844FA4A80AA_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_57598E1E990D49D0(::Class_0_16E4307DCC419505_233* a1, ::System::Action_1<::Class_0_16E4307DCC419505_234*>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_233*, ::System::Action_1<::Class_0_16E4307DCC419505_234*>*))((::PBYTE)hIl2Cpp + CLASS_1_FE36FFEA87DC93BA_METHOD_1_57598E1E990D49D0_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_233* Method_1_5C00C2EE4FCF347E()
	{
		return ((::Class_0_16E4307DCC419505_233*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE36FFEA87DC93BA_METHOD_1_5C00C2EE4FCF347E_OFFSET))(this);
	}
};
