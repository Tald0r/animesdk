#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/Arcade/BallsRace/BrEntityType.h"
#include "unitysdk/MoleMole/Arcade/BallsRace/EBrSpeedLevel.h"
#include "unitysdk/Struct_2_E614D3B245F96744.h"
#include "unitysdk/System/Numerics/Quaternion.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_785FDC7D0DA58280;
class Class_4_6B5E197F92845903;
namespace MoleMole::Arcade::BallsRace::Client { class BrClientConstantCfg; }
namespace System { class String; }

#define CLASS_1_F20CE690DF16F031_METHOD_1_229B5DA03F5A5DDD_OFFSET UNITYSDK_OFFSET(0x1ACB2A60)
#define CLASS_1_F20CE690DF16F031_METHOD_1_3B3065C404CE3D9B_OFFSET UNITYSDK_OFFSET(0x1ACB0D00)
#define CLASS_1_F20CE690DF16F031_METHOD_1_40838594AB865CDC_OFFSET UNITYSDK_OFFSET(0x1ACB2270)
#define CLASS_1_F20CE690DF16F031_METHOD_1_467EEF6F23744F3C_OFFSET UNITYSDK_OFFSET(0x1ACB2DE0)
#define CLASS_1_F20CE690DF16F031_METHOD_1_749A863BDCED24D2_1_OFFSET UNITYSDK_OFFSET(0x1ACB25C0)
#define CLASS_1_F20CE690DF16F031_METHOD_1_749A863BDCED24D2_2_OFFSET UNITYSDK_OFFSET(0x1ACB28A0)
#define CLASS_1_F20CE690DF16F031_METHOD_1_749A863BDCED24D2_3_OFFSET UNITYSDK_OFFSET(0x1ACB2980)
#define CLASS_1_F20CE690DF16F031_METHOD_1_749A863BDCED24D2_OFFSET UNITYSDK_OFFSET(0x1ACB24E0)
#define CLASS_1_F20CE690DF16F031_METHOD_1_AF1D964647397F9F_1_OFFSET UNITYSDK_OFFSET(0x1ACB2740)
#define CLASS_1_F20CE690DF16F031_METHOD_1_AF1D964647397F9F_2_OFFSET UNITYSDK_OFFSET(0x1ACB2C80)
#define CLASS_1_F20CE690DF16F031_METHOD_1_AF1D964647397F9F_OFFSET UNITYSDK_OFFSET(0x1ACB2310)
#define CLASS_1_F20CE690DF16F031_METHOD_1_AF7195F9B4CBF7F5_OFFSET UNITYSDK_OFFSET(0x1ACB26A0)
#define CLASS_1_F20CE690DF16F031_METHOD_1_E0E831A23D00CA26_OFFSET UNITYSDK_OFFSET(0x1ACB2ED0)
#define CLASS_1_F20CE690DF16F031_METHOD_1_F1FA6529EDC4410F_OFFSET UNITYSDK_OFFSET(0x1ACB2470)

inline static constexpr unsigned int Class_1_F20CE690DF16F031_TypeDefinitionIndex = 80142;

class Class_1_F20CE690DF16F031 : public ::System::Object
{
public:
	static ::MoleMole::Arcade::BallsRace::Client::BrClientConstantCfg** StaticGet_Field_1_0()
	{
		return (::MoleMole::Arcade::BallsRace::Client::BrClientConstantCfg**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F20CE690DF16F031_TypeDefinitionIndex)->GetStaticField(0x44F10);
	}

	static ::System::String* Method_1_40838594AB865CDC(::MoleMole::Arcade::BallsRace::BrEntityType a1)
	{
		return ((::System::String*(*)(::MoleMole::Arcade::BallsRace::BrEntityType))((::PBYTE)hIl2Cpp + CLASS_1_F20CE690DF16F031_METHOD_1_40838594AB865CDC_OFFSET))(a1);
	}

	static ::Foundation::AssetPath Method_1_AF1D964647397F9F(::MoleMole::Arcade::BallsRace::BrEntityType a1)
	{
		return ((::Foundation::AssetPath(*)(::MoleMole::Arcade::BallsRace::BrEntityType))((::PBYTE)hIl2Cpp + CLASS_1_F20CE690DF16F031_METHOD_1_AF1D964647397F9F_OFFSET))(a1);
	}

	static ::UnityEngine::Quaternion Method_1_F1FA6529EDC4410F(::System::Numerics::Quaternion a1)
	{
		return ((::UnityEngine::Quaternion(*)(::System::Numerics::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_F20CE690DF16F031_METHOD_1_F1FA6529EDC4410F_OFFSET))(a1);
	}

	static ::System::ValueTuple_2<::System::Single, ::System::Single> Method_1_749A863BDCED24D2(::MoleMole::Arcade::BallsRace::EBrSpeedLevel a1)
	{
		return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::MoleMole::Arcade::BallsRace::EBrSpeedLevel))((::PBYTE)hIl2Cpp + CLASS_1_F20CE690DF16F031_METHOD_1_749A863BDCED24D2_OFFSET))(a1);
	}

	static ::System::ValueTuple_2<::System::Single, ::System::Single> Method_1_749A863BDCED24D2_1(::MoleMole::Arcade::BallsRace::EBrSpeedLevel a1)
	{
		return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::MoleMole::Arcade::BallsRace::EBrSpeedLevel))((::PBYTE)hIl2Cpp + CLASS_1_F20CE690DF16F031_METHOD_1_749A863BDCED24D2_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_AF7195F9B4CBF7F5(::Class_2_785FDC7D0DA58280* a1, ::MoleMole::Arcade::BallsRace::Client::BrClientConstantCfg* a2)
	{
		return ((::System::Void(*)(::Class_2_785FDC7D0DA58280*, ::MoleMole::Arcade::BallsRace::Client::BrClientConstantCfg*))((::PBYTE)hIl2Cpp + CLASS_1_F20CE690DF16F031_METHOD_1_AF7195F9B4CBF7F5_OFFSET))(a1, a2);
	}

	static ::Foundation::AssetPath Method_1_AF1D964647397F9F_1(::MoleMole::Arcade::BallsRace::BrEntityType a1)
	{
		return ((::Foundation::AssetPath(*)(::MoleMole::Arcade::BallsRace::BrEntityType))((::PBYTE)hIl2Cpp + CLASS_1_F20CE690DF16F031_METHOD_1_AF1D964647397F9F_1_OFFSET))(a1);
	}

	static ::UnityEngine::Vector3 Method_1_3B3065C404CE3D9B(::Struct_2_E614D3B245F96744 a1)
	{
		return ((::UnityEngine::Vector3(*)(::Struct_2_E614D3B245F96744))((::PBYTE)hIl2Cpp + CLASS_1_F20CE690DF16F031_METHOD_1_3B3065C404CE3D9B_OFFSET))(a1);
	}

	static ::System::ValueTuple_2<::System::Single, ::System::Single> Method_1_749A863BDCED24D2_2(::MoleMole::Arcade::BallsRace::EBrSpeedLevel a1)
	{
		return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::MoleMole::Arcade::BallsRace::EBrSpeedLevel))((::PBYTE)hIl2Cpp + CLASS_1_F20CE690DF16F031_METHOD_1_749A863BDCED24D2_2_OFFSET))(a1);
	}

	static ::System::ValueTuple_2<::System::Single, ::System::Single> Method_1_749A863BDCED24D2_3(::MoleMole::Arcade::BallsRace::EBrSpeedLevel a1)
	{
		return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::MoleMole::Arcade::BallsRace::EBrSpeedLevel))((::PBYTE)hIl2Cpp + CLASS_1_F20CE690DF16F031_METHOD_1_749A863BDCED24D2_3_OFFSET))(a1);
	}

	static ::System::ValueTuple_2<::Foundation::AssetPath, ::System::String*> Method_1_229B5DA03F5A5DDD(::Class_4_6B5E197F92845903* a1, ::System::Int32 a2, ::MoleMole::Arcade::BallsRace::EBrSpeedLevel a3)
	{
		return ((::System::ValueTuple_2<::Foundation::AssetPath, ::System::String*>(*)(::Class_4_6B5E197F92845903*, ::System::Int32, ::MoleMole::Arcade::BallsRace::EBrSpeedLevel))((::PBYTE)hIl2Cpp + CLASS_1_F20CE690DF16F031_METHOD_1_229B5DA03F5A5DDD_OFFSET))(a1, a2, a3);
	}

	static ::Foundation::AssetPath Method_1_AF1D964647397F9F_2(::MoleMole::Arcade::BallsRace::BrEntityType a1)
	{
		return ((::Foundation::AssetPath(*)(::MoleMole::Arcade::BallsRace::BrEntityType))((::PBYTE)hIl2Cpp + CLASS_1_F20CE690DF16F031_METHOD_1_AF1D964647397F9F_2_OFFSET))(a1);
	}

	static ::Foundation::AssetPath Method_1_467EEF6F23744F3C(::Class_4_6B5E197F92845903* a1, ::System::Int32 a2)
	{
		return ((::Foundation::AssetPath(*)(::Class_4_6B5E197F92845903*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F20CE690DF16F031_METHOD_1_467EEF6F23744F3C_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_E0E831A23D00CA26(::MoleMole::Arcade::BallsRace::BrEntityType a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Arcade::BallsRace::BrEntityType))((::PBYTE)hIl2Cpp + CLASS_1_F20CE690DF16F031_METHOD_1_E0E831A23D00CA26_OFFSET))(a1);
	}
};
