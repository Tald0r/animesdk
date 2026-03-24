#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

class Class_2_F7625BCF52484303;
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas::Nodes { class SwitchBool; }

#define CLASS_2_F7625BCF52484303_CLASS_1_9A581B0FCA0A900D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6388D70)
#define CLASS_2_F7625BCF52484303_CLASS_1_9A581B0FCA0A900D_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x6388F30)
#define CLASS_2_F7625BCF52484303_CLASS_1_9A581B0FCA0A900D_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x6388F90)
#define CLASS_2_F7625BCF52484303_CLASS_1_9A581B0FCA0A900D_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x6388F40)
#define CLASS_2_F7625BCF52484303_CLASS_1_9A581B0FCA0A900D_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x6388D60)
#define CLASS_2_F7625BCF52484303_CLASS_1_9A581B0FCA0A900D__CTOR_OFFSET UNITYSDK_OFFSET(0x6388D50)

inline static constexpr unsigned int Class_2_F7625BCF52484303_Class_1_9A581B0FCA0A900D_TypeDefinitionIndex = 74974;

class Class_2_F7625BCF52484303_Class_1_9A581B0FCA0A900D : public ::System::Object
{
public:
	::Class_2_F7625BCF52484303* Field_1_2; // 0x10
	::FlowCanvas::Flow Field_1_5; // 0x18
	::System::Object* Field_1_1; // 0x40
	::FlowCanvas::FlowOutput* Field_1_4; // 0x48
	::FlowCanvas::Nodes::SwitchBool* Field_1_3; // 0x50
	::System::Boolean Field_1_6; // 0x58
	::System::Int32 Field_1_0; // 0x5C

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F7625BCF52484303_CLASS_1_9A581B0FCA0A900D__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F7625BCF52484303_CLASS_1_9A581B0FCA0A900D_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F7625BCF52484303_CLASS_1_9A581B0FCA0A900D_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F7625BCF52484303_CLASS_1_9A581B0FCA0A900D_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F7625BCF52484303_CLASS_1_9A581B0FCA0A900D_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F7625BCF52484303_CLASS_1_9A581B0FCA0A900D_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
