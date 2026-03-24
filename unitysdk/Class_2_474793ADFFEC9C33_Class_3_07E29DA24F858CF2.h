#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_945ACFB1FEBC7A2C_1;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_474793ADFFEC9C33_CLASS_3_07E29DA24F858CF2_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xCE82CE0)
#define CLASS_2_474793ADFFEC9C33_CLASS_3_07E29DA24F858CF2_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xCE82D50)
#define CLASS_2_474793ADFFEC9C33_CLASS_3_07E29DA24F858CF2_INVOKE_OFFSET UNITYSDK_OFFSET(0xCE82950)
#define CLASS_2_474793ADFFEC9C33_CLASS_3_07E29DA24F858CF2__CTOR_OFFSET UNITYSDK_OFFSET(0xCE82930)

inline static constexpr unsigned int Class_2_474793ADFFEC9C33_Class_3_07E29DA24F858CF2_TypeDefinitionIndex = 44356;

class Class_2_474793ADFFEC9C33_Class_3_07E29DA24F858CF2 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_2_474793ADFFEC9C33_CLASS_3_07E29DA24F858CF2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::System::Int32 a1, ::System::String* a2, ::Class_1_945ACFB1FEBC7A2C_1* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::Class_1_945ACFB1FEBC7A2C_1*))((::PBYTE)hIl2Cpp + CLASS_2_474793ADFFEC9C33_CLASS_3_07E29DA24F858CF2_INVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::IAsyncResult* BeginInvoke(::System::Int32 a1, ::System::String* a2, ::Class_1_945ACFB1FEBC7A2C_1* a3, ::System::AsyncCallback* a4, ::System::Object* a5)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::String*, ::Class_1_945ACFB1FEBC7A2C_1*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_474793ADFFEC9C33_CLASS_3_07E29DA24F858CF2_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_2_474793ADFFEC9C33_CLASS_3_07E29DA24F858CF2_ENDINVOKE_OFFSET))(this, a1);
	}
};
