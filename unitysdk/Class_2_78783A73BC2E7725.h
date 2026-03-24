#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3A45E918E5024074.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"

class Class_1_19C62F41C71F0C80;
namespace System { class EventArgs; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_78783A73BC2E7725_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCC09DA0)
#define CLASS_2_78783A73BC2E7725_METHOD_2_0ED0CC65FCA00A80_OFFSET UNITYSDK_OFFSET(0xCBED630)
#define CLASS_2_78783A73BC2E7725_METHOD_2_2A75DD86D2D27000_OFFSET UNITYSDK_OFFSET(0xCC09FD0)
#define CLASS_2_78783A73BC2E7725_METHOD_2_2AF9C8E783017A2B_OFFSET UNITYSDK_OFFSET(0xCC0A760)
#define CLASS_2_78783A73BC2E7725_METHOD_2_49AAC80CCF18DF2D_OFFSET UNITYSDK_OFFSET(0xCBED8E0)
#define CLASS_2_78783A73BC2E7725_METHOD_2_5CF31F8E10B32DAA_OFFSET UNITYSDK_OFFSET(0xCC0A250)
#define CLASS_2_78783A73BC2E7725_METHOD_2_69292918AEE5C06D_OFFSET UNITYSDK_OFFSET(0xCC0A430)
#define CLASS_2_78783A73BC2E7725_METHOD_2_87E85B9C34ED0312_OFFSET UNITYSDK_OFFSET(0xCC09F50)
#define CLASS_2_78783A73BC2E7725_METHOD_2_97C151A47E6F493F_OFFSET UNITYSDK_OFFSET(0xCC0A840)
#define CLASS_2_78783A73BC2E7725_METHOD_2_9F8864631434A8C7_OFFSET UNITYSDK_OFFSET(0xCC0A580)
#define CLASS_2_78783A73BC2E7725_METHOD_2_C02168B5282D28AE_OFFSET UNITYSDK_OFFSET(0xCC0A110)
#define CLASS_2_78783A73BC2E7725_METHOD_2_D631E6EFCE1547F3_OFFSET UNITYSDK_OFFSET(0xCC0A620)
#define CLASS_2_78783A73BC2E7725_ONCREATE_OFFSET UNITYSDK_OFFSET(0xCC09E60)
#define CLASS_2_78783A73BC2E7725__CTOR_OFFSET UNITYSDK_OFFSET(0xCC09EC0)

inline static constexpr unsigned int Class_2_78783A73BC2E7725_TypeDefinitionIndex = 55463;

class Class_2_78783A73BC2E7725 : public ::Foundation::SingletonDisposable_1<::Class_2_78783A73BC2E7725*>
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_19C62F41C71F0C80*>* Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_78783A73BC2E7725__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_78783A73BC2E7725_DISPOSE_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_78783A73BC2E7725_ONCREATE_OFFSET))(this);
	}

	::System::Boolean Method_2_87E85B9C34ED0312(::Enum_3_3A45E918E5024074 a1, ::System::Action_1<::System::EventArgs*>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_3A45E918E5024074, ::System::Action_1<::System::EventArgs*>*))((::PBYTE)hIl2Cpp + CLASS_2_78783A73BC2E7725_METHOD_2_87E85B9C34ED0312_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_C02168B5282D28AE(::System::Int32 a1, ::Class_1_19C62F41C71F0C80*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::Class_1_19C62F41C71F0C80*&))((::PBYTE)hIl2Cpp + CLASS_2_78783A73BC2E7725_METHOD_2_C02168B5282D28AE_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_2A75DD86D2D27000(::System::Int32 a1, ::System::Action_1<::System::EventArgs*>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Action_1<::System::EventArgs*>*))((::PBYTE)hIl2Cpp + CLASS_2_78783A73BC2E7725_METHOD_2_2A75DD86D2D27000_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5CF31F8E10B32DAA(::System::Int32 a1, ::System::Action_1<::System::EventArgs*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::System::EventArgs*>*))((::PBYTE)hIl2Cpp + CLASS_2_78783A73BC2E7725_METHOD_2_5CF31F8E10B32DAA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_49AAC80CCF18DF2D(::Enum_3_3A45E918E5024074 a1, ::System::Action_1<::System::EventArgs*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_3A45E918E5024074, ::System::Action_1<::System::EventArgs*>*))((::PBYTE)hIl2Cpp + CLASS_2_78783A73BC2E7725_METHOD_2_49AAC80CCF18DF2D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_69292918AEE5C06D(::System::Int32 a1, ::System::Action_1<::System::EventArgs*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::System::EventArgs*>*))((::PBYTE)hIl2Cpp + CLASS_2_78783A73BC2E7725_METHOD_2_69292918AEE5C06D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9F8864631434A8C7(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_78783A73BC2E7725_METHOD_2_9F8864631434A8C7_OFFSET))(this, a1);
	}

	::System::Void Method_2_0ED0CC65FCA00A80(::Enum_3_3A45E918E5024074 a1, ::System::Action_1<::System::EventArgs*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_3A45E918E5024074, ::System::Action_1<::System::EventArgs*>*))((::PBYTE)hIl2Cpp + CLASS_2_78783A73BC2E7725_METHOD_2_0ED0CC65FCA00A80_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D631E6EFCE1547F3(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_78783A73BC2E7725_METHOD_2_D631E6EFCE1547F3_OFFSET))(this, a1);
	}

	::System::Void Method_2_2AF9C8E783017A2B(::Enum_3_3A45E918E5024074 a1, ::System::EventArgs* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_3A45E918E5024074, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_78783A73BC2E7725_METHOD_2_2AF9C8E783017A2B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_97C151A47E6F493F(::System::Int32 a1, ::System::EventArgs* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_78783A73BC2E7725_METHOD_2_97C151A47E6F493F_OFFSET))(this, a1, a2);
	}
};
