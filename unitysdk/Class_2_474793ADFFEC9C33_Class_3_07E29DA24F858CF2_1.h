#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_0CE5318321486AA4;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_474793ADFFEC9C33_CLASS_3_07E29DA24F858CF2_1_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x75EB6A0)
#define CLASS_2_474793ADFFEC9C33_CLASS_3_07E29DA24F858CF2_1_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x75EB710)
#define CLASS_2_474793ADFFEC9C33_CLASS_3_07E29DA24F858CF2_1_INVOKE_OFFSET UNITYSDK_OFFSET(0x75EB310)
#define CLASS_2_474793ADFFEC9C33_CLASS_3_07E29DA24F858CF2_1__CTOR_OFFSET UNITYSDK_OFFSET(0x75EB2F0)

inline static constexpr unsigned int Class_2_474793ADFFEC9C33_Class_3_07E29DA24F858CF2_1_TypeDefinitionIndex = 44357;

class Class_2_474793ADFFEC9C33_Class_3_07E29DA24F858CF2_1 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_2_474793ADFFEC9C33_CLASS_3_07E29DA24F858CF2_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::System::Int32 a1, ::System::String* a2, ::Class_1_0CE5318321486AA4* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::Class_1_0CE5318321486AA4*))((::PBYTE)hIl2Cpp + CLASS_2_474793ADFFEC9C33_CLASS_3_07E29DA24F858CF2_1_INVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::IAsyncResult* BeginInvoke(::System::Int32 a1, ::System::String* a2, ::Class_1_0CE5318321486AA4* a3, ::System::AsyncCallback* a4, ::System::Object* a5)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::String*, ::Class_1_0CE5318321486AA4*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_474793ADFFEC9C33_CLASS_3_07E29DA24F858CF2_1_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_2_474793ADFFEC9C33_CLASS_3_07E29DA24F858CF2_1_ENDINVOKE_OFFSET))(this, a1);
	}
};
