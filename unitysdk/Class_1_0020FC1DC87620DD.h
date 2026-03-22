#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_01F2B992AB10B39D;
class Class_1_47EB23CB5C4B2615_2;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_0020FC1DC87620DD_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xF48EDD0)
#define CLASS_1_0020FC1DC87620DD_METHOD_1_3514A833EFF18553_OFFSET UNITYSDK_OFFSET(0xF48F030)
#define CLASS_1_0020FC1DC87620DD_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0xF48F3C0)
#define CLASS_1_0020FC1DC87620DD_METHOD_1_846C3A66AC33B6FF_OFFSET UNITYSDK_OFFSET(0xF48EEA0)
#define CLASS_1_0020FC1DC87620DD_METHOD_1_8E343674B07E4FB1_OFFSET UNITYSDK_OFFSET(0xF48EC80)
#define CLASS_1_0020FC1DC87620DD_METHOD_1_ADF1896D20AD41EF_OFFSET UNITYSDK_OFFSET(0xF48F210)
#define CLASS_1_0020FC1DC87620DD_METHOD_1_DCDF2FF319F7355F_OFFSET UNITYSDK_OFFSET(0xF48EC10)
#define CLASS_1_0020FC1DC87620DD__CTOR_OFFSET UNITYSDK_OFFSET(0xF48EC00)

inline static constexpr unsigned int Class_1_0020FC1DC87620DD_TypeDefinitionIndex = 51227;

class Class_1_0020FC1DC87620DD : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_01F2B992AB10B39D*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0020FC1DC87620DD__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_DCDF2FF319F7355F(::System::Collections::Generic::List_1<::Class_1_47EB23CB5C4B2615_2*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_47EB23CB5C4B2615_2*>*))((::PBYTE)hIl2Cpp + CLASS_1_0020FC1DC87620DD_METHOD_1_DCDF2FF319F7355F_OFFSET))(this, a1);
	}

	::System::Void Method_1_8E343674B07E4FB1(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0020FC1DC87620DD_METHOD_1_8E343674B07E4FB1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0020FC1DC87620DD_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_3514A833EFF18553(::System::Int32 a1, ::System::Collections::Generic::List_1<::Class_1_47EB23CB5C4B2615_2*>* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::Class_1_47EB23CB5C4B2615_2*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0020FC1DC87620DD_METHOD_1_3514A833EFF18553_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_ADF1896D20AD41EF(::System::Func_2<::System::Int32, ::System::Boolean>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_2<::System::Int32, ::System::Boolean>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0020FC1DC87620DD_METHOD_1_ADF1896D20AD41EF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_846C3A66AC33B6FF(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0020FC1DC87620DD_METHOD_1_846C3A66AC33B6FF_OFFSET))(this, a1);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0020FC1DC87620DD_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}
};
