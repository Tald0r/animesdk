#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
class Class_2_D0F9C106E2DD0573;
namespace MoleMole::Config { class DynamicFloat; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_54AC34684E951BD3_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xA6916E0)
#define CLASS_1_54AC34684E951BD3_FROMFLX_OFFSET UNITYSDK_OFFSET(0xA691A00)
#define CLASS_1_54AC34684E951BD3_METHOD_1_1A0B790695E07CE5_OFFSET UNITYSDK_OFFSET(0xA691740)
#define CLASS_1_54AC34684E951BD3_METHOD_1_277F8930086803D1_OFFSET UNITYSDK_OFFSET(0xA691980)
#define CLASS_1_54AC34684E951BD3_METHOD_1_DF413489329CBAF8_OFFSET UNITYSDK_OFFSET(0xA691A80)
#define CLASS_1_54AC34684E951BD3__CTOR_OFFSET UNITYSDK_OFFSET(0xA691E40)

inline static constexpr unsigned int Class_1_54AC34684E951BD3_TypeDefinitionIndex = 49455;

class Class_1_54AC34684E951BD3 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_2_D0F9C106E2DD0573*>* Field_1_1; // 0x10
	::MoleMole::Config::DynamicFloat* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54AC34684E951BD3__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_54AC34684E951BD3_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_277F8930086803D1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54AC34684E951BD3_METHOD_1_277F8930086803D1_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_54AC34684E951BD3_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1A0B790695E07CE5(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_54AC34684E951BD3_METHOD_1_1A0B790695E07CE5_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_DF413489329CBAF8(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_54AC34684E951BD3_METHOD_1_DF413489329CBAF8_OFFSET))(this, a1);
	}
};
