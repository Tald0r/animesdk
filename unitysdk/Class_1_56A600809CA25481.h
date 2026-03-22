#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_52BCA1880ED5953B;
namespace MoleMole::Config { class ConfigCameraComposer; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_56A600809CA25481_METHOD_1_6BB86695870EFBD1_OFFSET UNITYSDK_OFFSET(0x8103C80)
#define CLASS_1_56A600809CA25481_METHOD_1_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x8103DF0)
#define CLASS_1_56A600809CA25481__CTOR_OFFSET UNITYSDK_OFFSET(0x8103BD0)

inline static constexpr unsigned int Class_1_56A600809CA25481_TypeDefinitionIndex = 43979;

class Class_1_56A600809CA25481 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_7 = 0x3; // 0x0
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_2; // 0x10
	::System::Collections::Generic::List_1<::Class_1_52BCA1880ED5953B*>* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::Class_1_52BCA1880ED5953B*>* Field_1_0; // 0x20
	::MoleMole::Config::ConfigCameraComposer* Field_1_3; // 0x28
	::System::Boolean Field_1_4; // 0x30
	::System::Boolean Field_1_6; // 0x31
	::System::Int32 Field_1_5; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_56A600809CA25481__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_6BB86695870EFBD1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_56A600809CA25481_METHOD_1_6BB86695870EFBD1_OFFSET))(this);
	}

	::System::Void Method_1_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_56A600809CA25481_METHOD_1_97D83E4CB3B11935_OFFSET))(this);
	}
};
