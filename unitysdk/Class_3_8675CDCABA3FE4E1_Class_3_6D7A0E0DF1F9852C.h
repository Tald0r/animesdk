#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_E33A8767CD3B76C6.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_6346845EF620DF22;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_3_8675CDCABA3FE4E1_CLASS_3_6D7A0E0DF1F9852C_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x750A410)
#define CLASS_3_8675CDCABA3FE4E1_CLASS_3_6D7A0E0DF1F9852C_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x750A4B0)
#define CLASS_3_8675CDCABA3FE4E1_CLASS_3_6D7A0E0DF1F9852C_INVOKE_OFFSET UNITYSDK_OFFSET(0x750A080)
#define CLASS_3_8675CDCABA3FE4E1_CLASS_3_6D7A0E0DF1F9852C__CTOR_OFFSET UNITYSDK_OFFSET(0x750A060)

inline static constexpr unsigned int Class_3_8675CDCABA3FE4E1_Class_3_6D7A0E0DF1F9852C_TypeDefinitionIndex = 58833;

class Class_3_8675CDCABA3FE4E1_Class_3_6D7A0E0DF1F9852C : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_3_8675CDCABA3FE4E1_CLASS_3_6D7A0E0DF1F9852C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::Struct_2_FE667B282E242C72& a1, ::Struct_2_E33A8767CD3B76C6& a2, ::Class_1_6346845EF620DF22* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&, ::Struct_2_E33A8767CD3B76C6&, ::Class_1_6346845EF620DF22*))((::PBYTE)hIl2Cpp + CLASS_3_8675CDCABA3FE4E1_CLASS_3_6D7A0E0DF1F9852C_INVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::IAsyncResult* BeginInvoke(::Struct_2_FE667B282E242C72& a1, ::Struct_2_E33A8767CD3B76C6& a2, ::Class_1_6346845EF620DF22* a3, ::System::AsyncCallback* a4, ::System::Object* a5)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Struct_2_FE667B282E242C72&, ::Struct_2_E33A8767CD3B76C6&, ::Class_1_6346845EF620DF22*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_8675CDCABA3FE4E1_CLASS_3_6D7A0E0DF1F9852C_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void EndInvoke(::Struct_2_FE667B282E242C72& a1, ::Struct_2_E33A8767CD3B76C6& a2, ::System::IAsyncResult* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&, ::Struct_2_E33A8767CD3B76C6&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_3_8675CDCABA3FE4E1_CLASS_3_6D7A0E0DF1F9852C_ENDINVOKE_OFFSET))(this, a1, a2, a3);
	}
};
