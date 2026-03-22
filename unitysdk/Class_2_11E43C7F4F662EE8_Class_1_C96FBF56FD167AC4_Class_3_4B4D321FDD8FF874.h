#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_2_11E43C7F4F662EE8_CLASS_1_C96FBF56FD167AC4_CLASS_3_4B4D321FDD8FF874_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xC541710)
#define CLASS_2_11E43C7F4F662EE8_CLASS_1_C96FBF56FD167AC4_CLASS_3_4B4D321FDD8FF874_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xC541740)
#define CLASS_2_11E43C7F4F662EE8_CLASS_1_C96FBF56FD167AC4_CLASS_3_4B4D321FDD8FF874_INVOKE_OFFSET UNITYSDK_OFFSET(0xC541470)
#define CLASS_2_11E43C7F4F662EE8_CLASS_1_C96FBF56FD167AC4_CLASS_3_4B4D321FDD8FF874__CTOR_OFFSET UNITYSDK_OFFSET(0xC541460)

inline static constexpr unsigned int Class_2_11E43C7F4F662EE8_Class_1_C96FBF56FD167AC4_Class_3_4B4D321FDD8FF874_TypeDefinitionIndex = 47008;

class Class_2_11E43C7F4F662EE8_Class_1_C96FBF56FD167AC4_Class_3_4B4D321FDD8FF874 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_2_11E43C7F4F662EE8_CLASS_1_C96FBF56FD167AC4_CLASS_3_4B4D321FDD8FF874__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_11E43C7F4F662EE8_CLASS_1_C96FBF56FD167AC4_CLASS_3_4B4D321FDD8FF874_INVOKE_OFFSET))(this);
	}

	::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_11E43C7F4F662EE8_CLASS_1_C96FBF56FD167AC4_CLASS_3_4B4D321FDD8FF874_BEGININVOKE_OFFSET))(this, a1, a2);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_2_11E43C7F4F662EE8_CLASS_1_C96FBF56FD167AC4_CLASS_3_4B4D321FDD8FF874_ENDINVOKE_OFFSET))(this, a1);
	}
};
