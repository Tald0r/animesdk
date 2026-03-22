#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_E1401A8DB3FDB4A2_METHOD_1_8737FB73D5D0B4FB_OFFSET UNITYSDK_OFFSET(0x1586FA00)
#define CLASS_1_E1401A8DB3FDB4A2_METHOD_1_D4206361E9DB336E_OFFSET UNITYSDK_OFFSET(0x1586F9C0)

inline static constexpr unsigned int Class_1_E1401A8DB3FDB4A2_TypeDefinitionIndex = 11564;

class Class_1_E1401A8DB3FDB4A2 : public ::System::Object
{
public:
	static ::System::Func_2<::System::String*, ::Il2CppArray<::System::Byte>*>** StaticGet_Field_1_0()
	{
		return (::System::Func_2<::System::String*, ::Il2CppArray<::System::Byte>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E1401A8DB3FDB4A2_TypeDefinitionIndex)->GetStaticField(0x8E00);
	}

	static ::System::Func_2<::System::String*, ::Il2CppArray<::System::Byte>*>* Method_1_D4206361E9DB336E()
	{
		return ((::System::Func_2<::System::String*, ::Il2CppArray<::System::Byte>*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_E1401A8DB3FDB4A2_METHOD_1_D4206361E9DB336E_OFFSET))();
	}

	static ::System::Void Method_1_8737FB73D5D0B4FB(::System::Func_2<::System::String*, ::Il2CppArray<::System::Byte>*>* a1)
	{
		return ((::System::Void(*)(::System::Func_2<::System::String*, ::Il2CppArray<::System::Byte>*>*))((::PBYTE)hIl2Cpp + CLASS_1_E1401A8DB3FDB4A2_METHOD_1_8737FB73D5D0B4FB_OFFSET))(a1);
	}
};
