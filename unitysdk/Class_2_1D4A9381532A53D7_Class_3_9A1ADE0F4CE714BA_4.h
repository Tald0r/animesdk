#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_52A902145F5BE513.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_2_1D4A9381532A53D7_CLASS_3_9A1ADE0F4CE714BA_4_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xB9606F0)
#define CLASS_2_1D4A9381532A53D7_CLASS_3_9A1ADE0F4CE714BA_4_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xB960760)
#define CLASS_2_1D4A9381532A53D7_CLASS_3_9A1ADE0F4CE714BA_4_INVOKE_OFFSET UNITYSDK_OFFSET(0xB9603B0)
#define CLASS_2_1D4A9381532A53D7_CLASS_3_9A1ADE0F4CE714BA_4__CTOR_OFFSET UNITYSDK_OFFSET(0xB9603A0)

inline static constexpr unsigned int Class_2_1D4A9381532A53D7_Class_3_9A1ADE0F4CE714BA_4_TypeDefinitionIndex = 65218;

class Class_2_1D4A9381532A53D7_Class_3_9A1ADE0F4CE714BA_4 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_2_1D4A9381532A53D7_CLASS_3_9A1ADE0F4CE714BA_4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Invoke(::Struct_2_52A902145F5BE513& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_52A902145F5BE513&))((::PBYTE)hIl2Cpp + CLASS_2_1D4A9381532A53D7_CLASS_3_9A1ADE0F4CE714BA_4_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::Struct_2_52A902145F5BE513& a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Struct_2_52A902145F5BE513&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_1D4A9381532A53D7_CLASS_3_9A1ADE0F4CE714BA_4_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean EndInvoke(::Struct_2_52A902145F5BE513& a1, ::System::IAsyncResult* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_52A902145F5BE513&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_2_1D4A9381532A53D7_CLASS_3_9A1ADE0F4CE714BA_4_ENDINVOKE_OFFSET))(this, a1, a2);
	}
};
