#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_D95654107A7AAD9A_CLASS_1_8D6922C3C82CF96C_METHOD_1_96878E0074222561_OFFSET UNITYSDK_OFFSET(0x7DE0310)
#define CLASS_1_D95654107A7AAD9A_CLASS_1_8D6922C3C82CF96C_METHOD_1_CF78A58F9803F579_OFFSET UNITYSDK_OFFSET(0x7DE0440)
#define CLASS_1_D95654107A7AAD9A_CLASS_1_8D6922C3C82CF96C__CTOR_OFFSET UNITYSDK_OFFSET(0x7DE0300)

inline static constexpr unsigned int Class_1_D95654107A7AAD9A_Class_1_8D6922C3C82CF96C_TypeDefinitionIndex = 49018;

class Class_1_D95654107A7AAD9A_Class_1_8D6922C3C82CF96C : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D95654107A7AAD9A_CLASS_1_8D6922C3C82CF96C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_96878E0074222561(::System::UInt16 a1, ::System::UInt16 a2, ::System::UInt16 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::UInt16, ::System::UInt16))((::PBYTE)hIl2Cpp + CLASS_1_D95654107A7AAD9A_CLASS_1_8D6922C3C82CF96C_METHOD_1_96878E0074222561_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_CF78A58F9803F579(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D95654107A7AAD9A_CLASS_1_8D6922C3C82CF96C_METHOD_1_CF78A58F9803F579_OFFSET))(this, a1, a2, a3);
	}
};
