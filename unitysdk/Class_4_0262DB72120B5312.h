#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_95932C222EBC5BA5.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataHandle.h"

#define CLASS_4_0262DB72120B5312_GETCLASSID_OFFSET UNITYSDK_OFFSET(0xB586020)
#define CLASS_4_0262DB72120B5312_METHOD_4_3FC5188C07CF0F71_OFFSET UNITYSDK_OFFSET(0xB5861F0)
#define CLASS_4_0262DB72120B5312_METHOD_4_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0xB586290)
#define CLASS_4_0262DB72120B5312_ONCLEAN_OFFSET UNITYSDK_OFFSET(0xB586100)
#define CLASS_4_0262DB72120B5312__CCTOR_OFFSET UNITYSDK_OFFSET(0xB586080)
#define CLASS_4_0262DB72120B5312__CTOR_OFFSET UNITYSDK_OFFSET(0xB5861E0)

inline static constexpr unsigned int Class_4_0262DB72120B5312_TypeDefinitionIndex = 41076;

class Class_4_0262DB72120B5312 : public ::Class_3_95932C222EBC5BA5
{
public:
	// static const ::System::Int32 Field_4_0 = 0x125; // 0x0
	::MoleMole::HollowChessboard::RenderDataHandle Field_4_1; // 0x50
	::MoleMole::HollowChessboard::HollowChessboardUID Field_4_2; // 0x60
	::System::Boolean Field_4_3; // 0x68

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_0262DB72120B5312__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0262DB72120B5312__CTOR_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0262DB72120B5312_GETCLASSID_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0262DB72120B5312_ONCLEAN_OFFSET))(this);
	}

	static ::Class_4_0262DB72120B5312* Method_4_3FC5188C07CF0F71()
	{
		return ((::Class_4_0262DB72120B5312*(*)())((::PBYTE)hIl2Cpp + CLASS_4_0262DB72120B5312_METHOD_4_3FC5188C07CF0F71_OFFSET))();
	}

	::System::Int32 Method_4_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0262DB72120B5312_METHOD_4_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
