#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_52A902145F5BE513_1.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_2_1D4A9381532A53D7_CLASS_3_9A1ADE0F4CE714BA_5_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9F6E8D0)
#define CLASS_2_1D4A9381532A53D7_CLASS_3_9A1ADE0F4CE714BA_5_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9F6E940)
#define CLASS_2_1D4A9381532A53D7_CLASS_3_9A1ADE0F4CE714BA_5_INVOKE_OFFSET UNITYSDK_OFFSET(0x9F6E580)
#define CLASS_2_1D4A9381532A53D7_CLASS_3_9A1ADE0F4CE714BA_5__CTOR_OFFSET UNITYSDK_OFFSET(0x9F6E560)

inline static constexpr unsigned int Class_2_1D4A9381532A53D7_Class_3_9A1ADE0F4CE714BA_5_TypeDefinitionIndex = 75709;

class Class_2_1D4A9381532A53D7_Class_3_9A1ADE0F4CE714BA_5 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_2_1D4A9381532A53D7_CLASS_3_9A1ADE0F4CE714BA_5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Invoke(::Struct_2_52A902145F5BE513_1& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_52A902145F5BE513_1&))((::PBYTE)hIl2Cpp + CLASS_2_1D4A9381532A53D7_CLASS_3_9A1ADE0F4CE714BA_5_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::Struct_2_52A902145F5BE513_1& a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Struct_2_52A902145F5BE513_1&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_1D4A9381532A53D7_CLASS_3_9A1ADE0F4CE714BA_5_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean EndInvoke(::Struct_2_52A902145F5BE513_1& a1, ::System::IAsyncResult* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_52A902145F5BE513_1&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_2_1D4A9381532A53D7_CLASS_3_9A1ADE0F4CE714BA_5_ENDINVOKE_OFFSET))(this, a1, a2);
	}
};
