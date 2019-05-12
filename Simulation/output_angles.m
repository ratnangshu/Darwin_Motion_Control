function [ ] = output_angles( right_hand_angles, left_hand_angles, temp_left_joint_angles, temp_right_joint_angles )

%fprintf(', {%i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i}');
fprintf('      Dxl.writeWord(%i, GOAL_POSITION, %i);\n',1,round(512+194.80565*right_hand_angles(2)));
fprintf('      Dxl.writeWord(%i, GOAL_POSITION, %i);\n',2,round(512+194.80565*left_hand_angles(2)));
fprintf('      Dxl.writeWord(%i, GOAL_POSITION, %i);\n',3,round(512+194.80565*right_hand_angles(1)));
fprintf('      Dxl.writeWord(%i, GOAL_POSITION, %i);\n',4,round(512+194.80565*left_hand_angles(1)));
fprintf('      Dxl.writeWord(%i, GOAL_POSITION, %i);\n',5,round(512+194.80565*right_hand_angles(3)));
fprintf('      Dxl.writeWord(%i, GOAL_POSITION, %i);\n',6,round(512+194.80565*left_hand_angles(3)));
 
fprintf('      Dxl.writeWord(%i, GOAL_POSITION, %i);\n',7,round(512+194.80565*-temp_right_joint_angles(1)));
fprintf('      Dxl.writeWord(%i, GOAL_POSITION, %i);\n',8,round(512+194.80565*-temp_left_joint_angles(1)));
 
fprintf('      Dxl.writeWord(%i, GOAL_POSITION, %i);\n',9,round(512+194.80565*(temp_right_joint_angles(3)-0.2)));
fprintf('      Dxl.writeWord(%i, GOAL_POSITION, %i);\n',10,round(512+194.80565*-(temp_left_joint_angles(3)-0.2)));
 
fprintf('      Dxl.writeWord(%i, GOAL_POSITION, %i);\n',11,round(512+194.80565*-(temp_right_joint_angles(3)-temp_right_joint_angles(2))));
fprintf('      Dxl.writeWord(%i, GOAL_POSITION, %i);\n',12,round(512+194.80565*(temp_left_joint_angles(3)-temp_left_joint_angles(2))));
 
fprintf('      Dxl.writeWord(%i, GOAL_POSITION, %i);\n',13,round(512+194.80565*(temp_right_joint_angles(2)-0.1)));
fprintf('      Dxl.writeWord(%i, GOAL_POSITION, %i);\n',14,round(512+194.80565*-(temp_left_joint_angles(2)-0.1)));
 
fprintf('      Dxl.writeWord(%i, GOAL_POSITION, %i);\n',15,round(512+194.80565*-temp_right_joint_angles(1)));
fprintf('      Dxl.writeWord(%i, GOAL_POSITION, %i);\n',16,round(512+194.80565*-temp_left_joint_angles(1)));
 
fprintf('      delay(5);\n\n')
  
end
 


