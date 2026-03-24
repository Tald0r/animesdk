#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_1_8FBDD7D8E0EE0B49_CLASS_3_9A1ADE0F4CE714BA_2_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xCEC12B0)
#define CLASS_1_8FBDD7D8E0EE0B49_CLASS_3_9A1ADE0F4CE714BA_2_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xCEC1320)
#define CLASS_1_8FBDD7D8E0EE0B49_CLASS_3_9A1ADE0F4CE714BA_2_INVOKE_OFFSET UNITYSDK_OFFSET(0xCEC0DE0)
#define CLASS_1_8FBDD7D8E0EE0B49_CLASS_3_9A1ADE0F4CE714BA_2__CTOR_OFFSET UNITYSDK_OFFSET(0xCEC0DC0)

inline static constexpr unsigned int Class_1_8FBDD7D8E0EE0B49_Class_3_9A1ADE0F4CE714BA_2_TypeDefinitionIndex = 57224;

class Class_1_8FBDD7D8E0EE0B49_Class_3_9A1ADE0F4CE714BA_2 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_8FBDD7D8E0EE0B49_CLASS_3_9A1ADE0F4CE714BA_2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* Invoke(::Struct_2_FE667B282E242C72 a1)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::Struct_2_FE667B282E242C72))((::PBYTE)hIl2Cpp + CLASS_1_8FBDD7D8E0EE0B49_CLASS_3_9A1ADE0F4CE714BA_2_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::Struct_2_FE667B282E242C72 a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Struct_2_FE667B282E242C72, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_8FBDD7D8E0EE0B49_CLASS_3_9A1ADE0F4CE714BA_2_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_8FBDD7D8E0EE0B49_CLASS_3_9A1ADE0F4CE714BA_2_ENDINVOKE_OFFSET))(this, a1);
	}
};
