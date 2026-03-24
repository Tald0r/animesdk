#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Struct_2_F213AC3D3FBF57B9_1.h"

class Class_1_EA1FEF8121ADE963;
class Class_2_D0A1765C72A19057;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_3_CC4688F240DF8ADD_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x1533FE60)
#define CLASS_3_CC4688F240DF8ADD_METHOD_3_12DDA5F104DA7B2C_OFFSET UNITYSDK_OFFSET(0x1533FF50)
#define CLASS_3_CC4688F240DF8ADD_METHOD_3_64752E993AF7A109_OFFSET UNITYSDK_OFFSET(0x15340720)
#define CLASS_3_CC4688F240DF8ADD_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x15340090)
#define CLASS_3_CC4688F240DF8ADD_METHOD_3_B647D21FCD359F7E_OFFSET UNITYSDK_OFFSET(0x153400F0)
#define CLASS_3_CC4688F240DF8ADD_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x153408D0)
#define CLASS_3_CC4688F240DF8ADD_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x1533FBE0)
#define CLASS_3_CC4688F240DF8ADD__CCTOR_OFFSET UNITYSDK_OFFSET(0x1533FEC0)
#define CLASS_3_CC4688F240DF8ADD__CTOR_OFFSET UNITYSDK_OFFSET(0x1533FF40)

inline static constexpr unsigned int Class_3_CC4688F240DF8ADD_TypeDefinitionIndex = 69404;

class Class_3_CC4688F240DF8ADD : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_11 = 0x17; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_3_2; // 0x48
	::Class_2_D0A1765C72A19057* Field_3_8; // 0x50
	::Class_2_D0A1765C72A19057* Field_3_7; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_3_1; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_3_3; // 0x68
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_3_4; // 0x70
	::System::Single Field_3_10; // 0x78
	::System::UInt32 Field_3_9; // 0x7C
	::System::Single Field_3_6; // 0x80
	::Struct_2_F213AC3D3FBF57B9_1 Field_3_0; // 0x84
	::System::Single Field_3_5; // 0xC4

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_CC4688F240DF8ADD__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CC4688F240DF8ADD__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CC4688F240DF8ADD_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CC4688F240DF8ADD_GETCLASSID_OFFSET))(this);
	}

	::System::Void Method_3_12DDA5F104DA7B2C(::MoleMole::Battle::Entity* a1, ::Class_1_EA1FEF8121ADE963* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_1_EA1FEF8121ADE963*))((::PBYTE)hIl2Cpp + CLASS_3_CC4688F240DF8ADD_METHOD_3_12DDA5F104DA7B2C_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CC4688F240DF8ADD_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Int32 Method_3_B647D21FCD359F7E()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CC4688F240DF8ADD_METHOD_3_B647D21FCD359F7E_OFFSET))(this);
	}

	::System::Int32 Method_3_64752E993AF7A109()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CC4688F240DF8ADD_METHOD_3_64752E993AF7A109_OFFSET))(this);
	}

	static ::Class_3_CC4688F240DF8ADD* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_CC4688F240DF8ADD*(*)())((::PBYTE)hIl2Cpp + CLASS_3_CC4688F240DF8ADD_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}
};
