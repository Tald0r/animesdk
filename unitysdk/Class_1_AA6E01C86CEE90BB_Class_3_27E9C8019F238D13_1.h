#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CE73C3CBE1989A82_Enum_3_AA054C8224873299.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_1_AA6E01C86CEE90BB_CLASS_3_27E9C8019F238D13_1_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x5FA1C80)
#define CLASS_1_AA6E01C86CEE90BB_CLASS_3_27E9C8019F238D13_1_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x5FA1CF0)
#define CLASS_1_AA6E01C86CEE90BB_CLASS_3_27E9C8019F238D13_1_INVOKE_OFFSET UNITYSDK_OFFSET(0x5FA1990)
#define CLASS_1_AA6E01C86CEE90BB_CLASS_3_27E9C8019F238D13_1__CTOR_OFFSET UNITYSDK_OFFSET(0x5FA1980)

inline static constexpr unsigned int Class_1_AA6E01C86CEE90BB_Class_3_27E9C8019F238D13_1_TypeDefinitionIndex = 68319;

class Class_1_AA6E01C86CEE90BB_Class_3_27E9C8019F238D13_1 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_AA6E01C86CEE90BB_CLASS_3_27E9C8019F238D13_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* Invoke(::Class_1_CE73C3CBE1989A82_Enum_3_AA054C8224873299 a1)
	{
		return ((::System::String*(*)(::PVOID, ::Class_1_CE73C3CBE1989A82_Enum_3_AA054C8224873299))((::PBYTE)hIl2Cpp + CLASS_1_AA6E01C86CEE90BB_CLASS_3_27E9C8019F238D13_1_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::Class_1_CE73C3CBE1989A82_Enum_3_AA054C8224873299 a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Class_1_CE73C3CBE1989A82_Enum_3_AA054C8224873299, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_AA6E01C86CEE90BB_CLASS_3_27E9C8019F238D13_1_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::String* EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_AA6E01C86CEE90BB_CLASS_3_27E9C8019F238D13_1_ENDINVOKE_OFFSET))(this, a1);
	}
};
