#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_5D55D2D92073E392.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define STRUCT_2_5D55D2D92073E392_CLASS_3_9A1ADE0F4CE714BA_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x8CA5C20)
#define STRUCT_2_5D55D2D92073E392_CLASS_3_9A1ADE0F4CE714BA_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x8CA5C90)
#define STRUCT_2_5D55D2D92073E392_CLASS_3_9A1ADE0F4CE714BA_INVOKE_OFFSET UNITYSDK_OFFSET(0x8CA58E0)
#define STRUCT_2_5D55D2D92073E392_CLASS_3_9A1ADE0F4CE714BA__CTOR_OFFSET UNITYSDK_OFFSET(0x8CA58D0)

inline static constexpr unsigned int Struct_2_5D55D2D92073E392_Class_3_9A1ADE0F4CE714BA_TypeDefinitionIndex = 37259;

class Struct_2_5D55D2D92073E392_Class_3_9A1ADE0F4CE714BA : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + STRUCT_2_5D55D2D92073E392_CLASS_3_9A1ADE0F4CE714BA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::Struct_2_5D55D2D92073E392& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_5D55D2D92073E392&))((::PBYTE)hIl2Cpp + STRUCT_2_5D55D2D92073E392_CLASS_3_9A1ADE0F4CE714BA_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::Struct_2_5D55D2D92073E392& a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Struct_2_5D55D2D92073E392&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_5D55D2D92073E392_CLASS_3_9A1ADE0F4CE714BA_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void EndInvoke(::Struct_2_5D55D2D92073E392& a1, ::System::IAsyncResult* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_5D55D2D92073E392&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + STRUCT_2_5D55D2D92073E392_CLASS_3_9A1ADE0F4CE714BA_ENDINVOKE_OFFSET))(this, a1, a2);
	}
};
